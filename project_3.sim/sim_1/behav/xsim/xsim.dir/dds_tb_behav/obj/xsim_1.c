/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_4(char*, char *);
extern void execute_5(char*, char *);
extern void execute_6(char*, char *);
extern void execute_7(char*, char *);
extern void execute_8(char*, char *);
extern void execute_9(char*, char *);
extern void execute_53(char*, char *);
extern void execute_54(char*, char *);
extern void execute_758(char*, char *);
extern void execute_767(char*, char *);
extern void execute_768(char*, char *);
extern void execute_155(char*, char *);
extern void execute_221(char*, char *);
extern void execute_724(char*, char *);
extern void execute_725(char*, char *);
extern void execute_733(char*, char *);
extern void execute_741(char*, char *);
extern void execute_742(char*, char *);
extern void execute_152(char*, char *);
extern void execute_153(char*, char *);
extern void execute_154(char*, char *);
extern void execute_223(char*, char *);
extern void execute_228(char*, char *);
extern void execute_239(char*, char *);
extern void execute_231(char*, char *);
extern void execute_234(char*, char *);
extern void execute_235(char*, char *);
extern void execute_731(char*, char *);
extern void execute_728(char*, char *);
extern void execute_729(char*, char *);
extern void execute_737(char*, char *);
extern void execute_738(char*, char *);
extern void execute_739(char*, char *);
extern void execute_173(char*, char *);
extern void execute_174(char*, char *);
extern void execute_188(char*, char *);
extern void execute_164(char*, char *);
extern void execute_170(char*, char *);
extern void execute_171(char*, char *);
extern void execute_168(char*, char *);
extern void execute_176(char*, char *);
extern void execute_178(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_184(char*, char *);
extern void execute_186(char*, char *);
extern void execute_248(char*, char *);
extern void execute_716(char*, char *);
extern void execute_717(char*, char *);
extern void execute_251(char*, char *);
extern void execute_253(char*, char *);
extern void execute_255(char*, char *);
extern void execute_295(char*, char *);
extern void execute_297(char*, char *);
extern void execute_298(char*, char *);
extern void execute_372(char*, char *);
extern void execute_381(char*, char *);
extern void execute_388(char*, char *);
extern void execute_400(char*, char *);
extern void execute_691(char*, char *);
extern void execute_692(char*, char *);
extern void execute_707(char*, char *);
extern void execute_690(char*, char *);
extern void execute_695(char*, char *);
extern void execute_696(char*, char *);
extern void execute_261(char*, char *);
extern void execute_262(char*, char *);
extern void execute_263(char*, char *);
extern void execute_269(char*, char *);
extern void execute_287(char*, char *);
extern void execute_288(char*, char *);
extern void execute_290(char*, char *);
extern void execute_278(char*, char *);
extern void execute_284(char*, char *);
extern void execute_285(char*, char *);
extern void execute_282(char*, char *);
extern void execute_319(char*, char *);
extern void execute_310(char*, char *);
extern void execute_311(char*, char *);
extern void execute_315(char*, char *);
extern void execute_322(char*, char *);
extern void execute_355(char*, char *);
extern void execute_357(char*, char *);
extern void execute_358(char*, char *);
extern void execute_326(char*, char *);
extern void execute_331(char*, char *);
extern void execute_349(char*, char *);
extern void execute_350(char*, char *);
extern void execute_352(char*, char *);
extern void execute_340(char*, char *);
extern void execute_346(char*, char *);
extern void execute_347(char*, char *);
extern void execute_344(char*, char *);
extern void execute_362(char*, char *);
extern void execute_363(char*, char *);
extern void execute_364(char*, char *);
extern void execute_377(char*, char *);
extern void execute_700(char*, char *);
extern void execute_413(char*, char *);
extern void execute_416(char*, char *);
extern void execute_423(char*, char *);
extern void execute_458(char*, char *);
extern void execute_459(char*, char *);
extern void execute_427(char*, char *);
extern void execute_431(char*, char *);
extern void execute_463(char*, char *);
extern void execute_464(char*, char *);
extern void execute_468(char*, char *);
extern void execute_510(char*, char *);
extern void execute_511(char*, char *);
extern void execute_515(char*, char *);
extern void execute_516(char*, char *);
extern void execute_517(char*, char *);
extern void execute_518(char*, char *);
extern void execute_519(char*, char *);
extern void execute_520(char*, char *);
extern void execute_521(char*, char *);
extern void execute_522(char*, char *);
extern void execute_603(char*, char *);
extern void execute_604(char*, char *);
extern void execute_605(char*, char *);
extern void execute_606(char*, char *);
extern void execute_448(char*, char *);
extern void execute_449(char*, char *);
extern void execute_457(char*, char *);
extern void execute_439(char*, char *);
extern void execute_445(char*, char *);
extern void execute_446(char*, char *);
extern void execute_443(char*, char *);
extern void execute_451(char*, char *);
extern void execute_453(char*, char *);
extern void execute_455(char*, char *);
extern void execute_485(char*, char *);
extern void execute_486(char*, char *);
extern void execute_488(char*, char *);
extern void execute_476(char*, char *);
extern void execute_482(char*, char *);
extern void execute_483(char*, char *);
extern void execute_480(char*, char *);
extern void execute_539(char*, char *);
extern void execute_540(char*, char *);
extern void execute_542(char*, char *);
extern void execute_530(char*, char *);
extern void execute_536(char*, char *);
extern void execute_537(char*, char *);
extern void execute_534(char*, char *);
extern void execute_559(char*, char *);
extern void execute_560(char*, char *);
extern void execute_562(char*, char *);
extern void execute_550(char*, char *);
extern void execute_556(char*, char *);
extern void execute_557(char*, char *);
extern void execute_554(char*, char *);
extern void execute_714(char*, char *);
extern void execute_760(char*, char *);
extern void execute_761(char*, char *);
extern void execute_762(char*, char *);
extern void execute_763(char*, char *);
extern void execute_764(char*, char *);
extern void execute_765(char*, char *);
extern void execute_766(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_87(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_88(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_94(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_95(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_98(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_99(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_100(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_121(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_125(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_132(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_141(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_258(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_275(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_276(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[180] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_7, (funcp)execute_8, (funcp)execute_9, (funcp)execute_53, (funcp)execute_54, (funcp)execute_758, (funcp)execute_767, (funcp)execute_768, (funcp)execute_155, (funcp)execute_221, (funcp)execute_724, (funcp)execute_725, (funcp)execute_733, (funcp)execute_741, (funcp)execute_742, (funcp)execute_152, (funcp)execute_153, (funcp)execute_154, (funcp)execute_223, (funcp)execute_228, (funcp)execute_239, (funcp)execute_231, (funcp)execute_234, (funcp)execute_235, (funcp)execute_731, (funcp)execute_728, (funcp)execute_729, (funcp)execute_737, (funcp)execute_738, (funcp)execute_739, (funcp)execute_173, (funcp)execute_174, (funcp)execute_188, (funcp)execute_164, (funcp)execute_170, (funcp)execute_171, (funcp)execute_168, (funcp)execute_176, (funcp)execute_178, (funcp)execute_180, (funcp)execute_182, (funcp)execute_184, (funcp)execute_186, (funcp)execute_248, (funcp)execute_716, (funcp)execute_717, (funcp)execute_251, (funcp)execute_253, (funcp)execute_255, (funcp)execute_295, (funcp)execute_297, (funcp)execute_298, (funcp)execute_372, (funcp)execute_381, (funcp)execute_388, (funcp)execute_400, (funcp)execute_691, (funcp)execute_692, (funcp)execute_707, (funcp)execute_690, (funcp)execute_695, (funcp)execute_696, (funcp)execute_261, (funcp)execute_262, (funcp)execute_263, (funcp)execute_269, (funcp)execute_287, (funcp)execute_288, (funcp)execute_290, (funcp)execute_278, (funcp)execute_284, (funcp)execute_285, (funcp)execute_282, (funcp)execute_319, (funcp)execute_310, (funcp)execute_311, (funcp)execute_315, (funcp)execute_322, (funcp)execute_355, (funcp)execute_357, (funcp)execute_358, (funcp)execute_326, (funcp)execute_331, (funcp)execute_349, (funcp)execute_350, (funcp)execute_352, (funcp)execute_340, (funcp)execute_346, (funcp)execute_347, (funcp)execute_344, (funcp)execute_362, (funcp)execute_363, (funcp)execute_364, (funcp)execute_377, (funcp)execute_700, (funcp)execute_413, (funcp)execute_416, (funcp)execute_423, (funcp)execute_458, (funcp)execute_459, (funcp)execute_427, (funcp)execute_431, (funcp)execute_463, (funcp)execute_464, (funcp)execute_468, (funcp)execute_510, (funcp)execute_511, (funcp)execute_515, (funcp)execute_516, (funcp)execute_517, (funcp)execute_518, (funcp)execute_519, (funcp)execute_520, (funcp)execute_521, (funcp)execute_522, (funcp)execute_603, (funcp)execute_604, (funcp)execute_605, (funcp)execute_606, (funcp)execute_448, (funcp)execute_449, (funcp)execute_457, (funcp)execute_439, (funcp)execute_445, (funcp)execute_446, (funcp)execute_443, (funcp)execute_451, (funcp)execute_453, (funcp)execute_455, (funcp)execute_485, (funcp)execute_486, (funcp)execute_488, (funcp)execute_476, (funcp)execute_482, (funcp)execute_483, (funcp)execute_480, (funcp)execute_539, (funcp)execute_540, (funcp)execute_542, (funcp)execute_530, (funcp)execute_536, (funcp)execute_537, (funcp)execute_534, (funcp)execute_559, (funcp)execute_560, (funcp)execute_562, (funcp)execute_550, (funcp)execute_556, (funcp)execute_557, (funcp)execute_554, (funcp)execute_714, (funcp)execute_760, (funcp)execute_761, (funcp)execute_762, (funcp)execute_763, (funcp)execute_764, (funcp)execute_765, (funcp)execute_766, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_32, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_87, (funcp)transaction_88, (funcp)transaction_94, (funcp)transaction_95, (funcp)transaction_98, (funcp)transaction_99, (funcp)transaction_100, (funcp)transaction_121, (funcp)transaction_125, (funcp)transaction_132, (funcp)transaction_141, (funcp)transaction_258, (funcp)transaction_275, (funcp)transaction_276};
const int NumRelocateId= 180;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dds_tb_behav/xsim.reloc",  (void **)funcTab, 180);
	iki_vhdl_file_variable_register(dp + 591456);
	iki_vhdl_file_variable_register(dp + 591512);
	iki_vhdl_file_variable_register(dp + 863864);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/dds_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dds_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dds_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
