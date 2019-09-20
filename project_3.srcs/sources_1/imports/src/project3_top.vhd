----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 09/04/2019 07:57:45 PM
-- Design Name: 
-- Module Name: project3_top - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

entity project3_top is Port (
    AC_ADR0   : inout std_logic;  -- CODEC SPI Data Latch: must go LOW at the BEGGINING of an SPI transaction and HIGH at the END.
    AC_ADR1   : inout std_logic;  -- CODEC SPI Data Input 
    AC_GPIO0  : inout std_logic;  -- CODEC Digital Audio Serial-Data DAC
 -- AC_GPIO1  : in std_logic;   -- CODEC Digital Audio Serial-Data ADC - not used
    AC_GPIO2  : inout std_logic;  -- CODEC Digital Audio bit clock
    AC_GPIO3  : inout std_logic;  -- CODEC Digital Audio Left-Right Clock
    AC_MCLK   : inout std_logic;  -- CODEC Master Clock
    AC_SCK    : inout std_logic;  -- CODEC SPI Clock
    AC_SDA    : inout std_logic;   -- CODEC SPI Data Output
    uart_tx   : out std_logic;  -- PMOD UART TX
    uart_rx   : in std_logic;   -- PMOR UART RX
    SW0       : in std_logic;   -- for reset
    SW1       : in std_logic;   -- for dds_reset
    GCLK      : in std_logic;    -- for system clock
    LEDS      : out std_logic_vector(7 downto 0)
  );
end project3_top;

architecture Behavioral of project3_top is

  component ila_0 is port (
      clk : IN STD_LOGIC; 
	    probe0 : IN STD_LOGIC_VECTOR(7 DOWNTO 0); 
      probe1 : IN STD_LOGIC_VECTOR(7 DOWNTO 0); 
      probe2 : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
      probe3 : IN STD_LOGIC_VECTOR(15 DOWNTO 0)
    );
  end component; 
  
  component proc_system is port (
      uart_rtl_rxd : in STD_LOGIC;
      uart_rtl_txd : out STD_LOGIC;
      spi_rtl_io0_i : in STD_LOGIC;
      spi_rtl_io0_o : out STD_LOGIC;
      spi_rtl_io0_t : out STD_LOGIC;
      spi_rtl_io1_i : in STD_LOGIC;
      spi_rtl_io1_o : out STD_LOGIC;
      spi_rtl_io1_t : out STD_LOGIC;
      spi_rtl_sck_i : in STD_LOGIC;
      spi_rtl_sck_o : out STD_LOGIC;
      spi_rtl_sck_t : out STD_LOGIC;
      spi_rtl_ss_i : in STD_LOGIC_VECTOR ( 0 to 0 );
      spi_rtl_ss_o : out STD_LOGIC_VECTOR ( 0 to 0 );
      spi_rtl_ss_t : out STD_LOGIC;
      DDS_M_AXIS_DATA_0_tdata : out STD_LOGIC_VECTOR ( 15 downto 0 );
      DDS_M_AXIS_DATA_0_tvalid : out STD_LOGIC;
      Clk : in STD_LOGIC;
      reset_rtl : in STD_LOGIC;
      spi_gpio_resetn : in STD_LOGIC;
      dds_reset : in STD_LOGIC;
      dds_s_tvalid : in STD_LOGIC
    );
  end component proc_system;
  
  component IOBUF is port (
      I : in STD_LOGIC;
      O : out STD_LOGIC;
      T : in STD_LOGIC;
      IO : inout STD_LOGIC
    );
  end component IOBUF;
    
  signal spi_rtl_io0_i : STD_LOGIC;
  signal spi_rtl_io0_o : STD_LOGIC;
  signal spi_rtl_io0_t : STD_LOGIC;
  signal spi_rtl_io0_io : STD_LOGIC;
  
  signal spi_rtl_io1_i : STD_LOGIC;
  signal spi_rtl_io1_o : STD_LOGIC;
  signal spi_rtl_io1_t : STD_LOGIC;
  signal spi_rtl_io1_io : STD_LOGIC;
  
  signal spi_rtl_sck_i : STD_LOGIC;
  signal spi_rtl_sck_o : STD_LOGIC;
  signal spi_rtl_sck_t : STD_LOGIC;
  signal spi_rtl_sck_io : STD_LOGIC;
  
  signal spi_rtl_ss_i_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_ss_io_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_ss_o_0 : STD_LOGIC_VECTOR ( 0 to 0 );
  signal spi_rtl_ss_t : STD_LOGIC;
    
  signal reset : std_logic;
  signal not_reset : std_logic;
  signal clk : std_logic;
  signal audio_out_word : std_logic_vector(31 downto 0);
  signal audio_out_word_sin_test : std_logic_vector(31 downto 0);
  signal adc_ready : std_logic;
  signal uninitialized : std_logic;
  signal buffered_adc_ready : std_logic := '1';

  signal dds_reset : std_logic;

  signal ila_probe0 : STD_LOGIC_VECTOR(7 DOWNTO 0); 
  signal ila_probe1 : STD_LOGIC_VECTOR(7 DOWNTO 0); 
  signal ila_probe2 : STD_LOGIC_VECTOR(15 DOWNTO 0);
  signal ila_probe3 : STD_LOGIC_VECTOR(15 DOWNTO 0);
  
begin

    not_reset <= not reset;

    -- Connect audio codec   
    ll_dac_gen: entity lowlevel_dac_intfc port map (
        rst => reset,
        clk100 => clk,
        data_word => audio_out_word,-- audio_out_word_sin_test,
        sdata => AC_GPIO0,
        lrck => AC_GPIO3,
        bclk => AC_GPIO2,
        mclk=> AC_MCLK,
        latched_data => adc_ready 
    ); 
    
    buffer_latched_data : process (clk, reset)
    begin
      buffered_adc_ready <= uninitialized or adc_ready;  
      if reset = '1' then
        buffered_adc_ready <= '1';
      elsif rising_edge(clk) then
        if adc_ready = '1' then 
          uninitialized <= '0';
        end if;
      end if; 
    end process;
    
    proc_system_gen: component proc_system port map (
        Clk => Clk,
        dds_reset => dds_reset,
        dds_s_tvalid => '1',
        DDS_M_AXIS_DATA_0_tdata(15 downto 0) => audio_out_word,
        spi_gpio_resetn => not_reset,
        reset_rtl => reset,
        uart_rtl_rxd => uart_rx,
        uart_rtl_txd => uart_tx,
        spi_rtl_io0_i => spi_rtl_io0_i,
        spi_rtl_io0_o => spi_rtl_io0_o,
        spi_rtl_io0_t => spi_rtl_io0_t,
        spi_rtl_io1_i => spi_rtl_io1_i,
        spi_rtl_io1_o => spi_rtl_io1_o,
        spi_rtl_io1_t => spi_rtl_io1_t,
        spi_rtl_sck_i => spi_rtl_sck_i,
        spi_rtl_sck_o => spi_rtl_sck_o,
        spi_rtl_sck_t => spi_rtl_sck_t,
        spi_rtl_ss_i(0) => spi_rtl_ss_i_0(0),
        spi_rtl_ss_o(0) => spi_rtl_ss_o_0(0),
        spi_rtl_ss_t => spi_rtl_ss_t
    );
    
    spi_rtl_io0_iobuf: component IOBUF
         port map (
          I => spi_rtl_io0_o,
          IO => spi_rtl_io0_io,
          O => spi_rtl_io0_i,
          T => spi_rtl_io0_t
        );
    spi_rtl_io1_iobuf: component IOBUF
         port map (
          I => spi_rtl_io1_o,
          IO => spi_rtl_io1_io,
          O => spi_rtl_io1_i,
          T => spi_rtl_io1_t
        );
    spi_rtl_sck_iobuf: component IOBUF
         port map (
          I => spi_rtl_sck_o,
          IO => spi_rtl_sck_io,
          O => spi_rtl_sck_i,
          T => spi_rtl_sck_t
        );
    spi_rtl_ss_iobuf_0: component IOBUF
         port map (
          I => spi_rtl_ss_o_0(0),
          IO => spi_rtl_ss_io_0(0),
          O => spi_rtl_ss_i_0(0),
          T => spi_rtl_ss_t
        );

    -- Hook up the Proc system's SPI Interface to the ADAU1761's SPI
    AC_ADR1 <= spi_rtl_io0_io;
    spi_rtl_io1_io <= AC_SDA;
    AC_SCK <= spi_rtl_sck_io;
    AC_ADR0 <= spi_rtl_ss_io_0(0);
    
    reset <= SW0;
    dds_reset <= SW1;
    clk <= GCLK;
    
    -- ILA Hookup
    ila_probe0(0) <= spi_rtl_sck_o; -- spi clock
    ila_probe0(1) <= spi_rtl_io0_o; -- spi output to dac
    ila_probe0(2) <= spi_rtl_io1_o; -- spi output from dac
    ila_probe0(3) <= spi_rtl_ss_o_0(0); -- spi SS
    ila_probe0(4) <= adc_ready;
    ila_probe0(7 downto 5) <= (others => '0');
    
    ila_probe1(7 downto 0) <= (others => '0');
    
    ila_probe2 <= audio_out_word_sin_test(15 downto 0);
    ila_probe3 <= audio_out_word_sin_test(31 downto 16);

    ila_inst: component ila_0 port map (
        clk => clk,
        probe0 => ila_probe0,
        probe1 => ila_probe1,
        probe2 => ila_probe2,
        probe3 => ila_probe3
    );
    
end Behavioral;
