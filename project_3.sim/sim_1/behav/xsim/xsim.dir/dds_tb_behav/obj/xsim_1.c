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
extern void execute_51(char*, char *);
extern void execute_52(char*, char *);
extern void execute_756(char*, char *);
extern void execute_757(char*, char *);
extern void execute_758(char*, char *);
extern void execute_153(char*, char *);
extern void execute_219(char*, char *);
extern void execute_722(char*, char *);
extern void execute_723(char*, char *);
extern void execute_731(char*, char *);
extern void execute_739(char*, char *);
extern void execute_740(char*, char *);
extern void execute_150(char*, char *);
extern void execute_151(char*, char *);
extern void execute_152(char*, char *);
extern void execute_221(char*, char *);
extern void execute_226(char*, char *);
extern void execute_237(char*, char *);
extern void execute_229(char*, char *);
extern void execute_232(char*, char *);
extern void execute_233(char*, char *);
extern void execute_729(char*, char *);
extern void execute_726(char*, char *);
extern void execute_727(char*, char *);
extern void execute_735(char*, char *);
extern void execute_736(char*, char *);
extern void execute_737(char*, char *);
extern void execute_171(char*, char *);
extern void execute_172(char*, char *);
extern void execute_186(char*, char *);
extern void execute_162(char*, char *);
extern void execute_168(char*, char *);
extern void execute_169(char*, char *);
extern void execute_166(char*, char *);
extern void execute_174(char*, char *);
extern void execute_176(char*, char *);
extern void execute_178(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_184(char*, char *);
extern void execute_246(char*, char *);
extern void execute_714(char*, char *);
extern void execute_715(char*, char *);
extern void execute_249(char*, char *);
extern void execute_251(char*, char *);
extern void execute_253(char*, char *);
extern void execute_293(char*, char *);
extern void execute_295(char*, char *);
extern void execute_296(char*, char *);
extern void execute_370(char*, char *);
extern void execute_379(char*, char *);
extern void execute_386(char*, char *);
extern void execute_398(char*, char *);
extern void execute_689(char*, char *);
extern void execute_690(char*, char *);
extern void execute_705(char*, char *);
extern void execute_688(char*, char *);
extern void execute_693(char*, char *);
extern void execute_694(char*, char *);
extern void execute_259(char*, char *);
extern void execute_260(char*, char *);
extern void execute_261(char*, char *);
extern void execute_267(char*, char *);
extern void execute_285(char*, char *);
extern void execute_286(char*, char *);
extern void execute_288(char*, char *);
extern void execute_276(char*, char *);
extern void execute_282(char*, char *);
extern void execute_283(char*, char *);
extern void execute_280(char*, char *);
extern void execute_317(char*, char *);
extern void execute_308(char*, char *);
extern void execute_309(char*, char *);
extern void execute_313(char*, char *);
extern void execute_320(char*, char *);
extern void execute_353(char*, char *);
extern void execute_355(char*, char *);
extern void execute_356(char*, char *);
extern void execute_324(char*, char *);
extern void execute_329(char*, char *);
extern void execute_347(char*, char *);
extern void execute_348(char*, char *);
extern void execute_350(char*, char *);
extern void execute_338(char*, char *);
extern void execute_344(char*, char *);
extern void execute_345(char*, char *);
extern void execute_342(char*, char *);
extern void execute_360(char*, char *);
extern void execute_361(char*, char *);
extern void execute_362(char*, char *);
extern void execute_375(char*, char *);
extern void execute_698(char*, char *);
extern void execute_411(char*, char *);
extern void execute_414(char*, char *);
extern void execute_421(char*, char *);
extern void execute_456(char*, char *);
extern void execute_457(char*, char *);
extern void execute_425(char*, char *);
extern void execute_429(char*, char *);
extern void execute_461(char*, char *);
extern void execute_462(char*, char *);
extern void execute_466(char*, char *);
extern void execute_508(char*, char *);
extern void execute_509(char*, char *);
extern void execute_513(char*, char *);
extern void execute_514(char*, char *);
extern void execute_515(char*, char *);
extern void execute_516(char*, char *);
extern void execute_517(char*, char *);
extern void execute_518(char*, char *);
extern void execute_519(char*, char *);
extern void execute_520(char*, char *);
extern void execute_601(char*, char *);
extern void execute_602(char*, char *);
extern void execute_603(char*, char *);
extern void execute_604(char*, char *);
extern void execute_446(char*, char *);
extern void execute_447(char*, char *);
extern void execute_455(char*, char *);
extern void execute_437(char*, char *);
extern void execute_443(char*, char *);
extern void execute_444(char*, char *);
extern void execute_441(char*, char *);
extern void execute_449(char*, char *);
extern void execute_451(char*, char *);
extern void execute_453(char*, char *);
extern void execute_483(char*, char *);
extern void execute_484(char*, char *);
extern void execute_486(char*, char *);
extern void execute_474(char*, char *);
extern void execute_480(char*, char *);
extern void execute_481(char*, char *);
extern void execute_478(char*, char *);
extern void execute_537(char*, char *);
extern void execute_538(char*, char *);
extern void execute_540(char*, char *);
extern void execute_528(char*, char *);
extern void execute_534(char*, char *);
extern void execute_535(char*, char *);
extern void execute_532(char*, char *);
extern void execute_557(char*, char *);
extern void execute_558(char*, char *);
extern void execute_560(char*, char *);
extern void execute_548(char*, char *);
extern void execute_554(char*, char *);
extern void execute_555(char*, char *);
extern void execute_552(char*, char *);
extern void execute_712(char*, char *);
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
funcp funcTab[173] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_7, (funcp)execute_8, (funcp)execute_9, (funcp)execute_51, (funcp)execute_52, (funcp)execute_756, (funcp)execute_757, (funcp)execute_758, (funcp)execute_153, (funcp)execute_219, (funcp)execute_722, (funcp)execute_723, (funcp)execute_731, (funcp)execute_739, (funcp)execute_740, (funcp)execute_150, (funcp)execute_151, (funcp)execute_152, (funcp)execute_221, (funcp)execute_226, (funcp)execute_237, (funcp)execute_229, (funcp)execute_232, (funcp)execute_233, (funcp)execute_729, (funcp)execute_726, (funcp)execute_727, (funcp)execute_735, (funcp)execute_736, (funcp)execute_737, (funcp)execute_171, (funcp)execute_172, (funcp)execute_186, (funcp)execute_162, (funcp)execute_168, (funcp)execute_169, (funcp)execute_166, (funcp)execute_174, (funcp)execute_176, (funcp)execute_178, (funcp)execute_180, (funcp)execute_182, (funcp)execute_184, (funcp)execute_246, (funcp)execute_714, (funcp)execute_715, (funcp)execute_249, (funcp)execute_251, (funcp)execute_253, (funcp)execute_293, (funcp)execute_295, (funcp)execute_296, (funcp)execute_370, (funcp)execute_379, (funcp)execute_386, (funcp)execute_398, (funcp)execute_689, (funcp)execute_690, (funcp)execute_705, (funcp)execute_688, (funcp)execute_693, (funcp)execute_694, (funcp)execute_259, (funcp)execute_260, (funcp)execute_261, (funcp)execute_267, (funcp)execute_285, (funcp)execute_286, (funcp)execute_288, (funcp)execute_276, (funcp)execute_282, (funcp)execute_283, (funcp)execute_280, (funcp)execute_317, (funcp)execute_308, (funcp)execute_309, (funcp)execute_313, (funcp)execute_320, (funcp)execute_353, (funcp)execute_355, (funcp)execute_356, (funcp)execute_324, (funcp)execute_329, (funcp)execute_347, (funcp)execute_348, (funcp)execute_350, (funcp)execute_338, (funcp)execute_344, (funcp)execute_345, (funcp)execute_342, (funcp)execute_360, (funcp)execute_361, (funcp)execute_362, (funcp)execute_375, (funcp)execute_698, (funcp)execute_411, (funcp)execute_414, (funcp)execute_421, (funcp)execute_456, (funcp)execute_457, (funcp)execute_425, (funcp)execute_429, (funcp)execute_461, (funcp)execute_462, (funcp)execute_466, (funcp)execute_508, (funcp)execute_509, (funcp)execute_513, (funcp)execute_514, (funcp)execute_515, (funcp)execute_516, (funcp)execute_517, (funcp)execute_518, (funcp)execute_519, (funcp)execute_520, (funcp)execute_601, (funcp)execute_602, (funcp)execute_603, (funcp)execute_604, (funcp)execute_446, (funcp)execute_447, (funcp)execute_455, (funcp)execute_437, (funcp)execute_443, (funcp)execute_444, (funcp)execute_441, (funcp)execute_449, (funcp)execute_451, (funcp)execute_453, (funcp)execute_483, (funcp)execute_484, (funcp)execute_486, (funcp)execute_474, (funcp)execute_480, (funcp)execute_481, (funcp)execute_478, (funcp)execute_537, (funcp)execute_538, (funcp)execute_540, (funcp)execute_528, (funcp)execute_534, (funcp)execute_535, (funcp)execute_532, (funcp)execute_557, (funcp)execute_558, (funcp)execute_560, (funcp)execute_548, (funcp)execute_554, (funcp)execute_555, (funcp)execute_552, (funcp)execute_712, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_32, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_87, (funcp)transaction_88, (funcp)transaction_94, (funcp)transaction_95, (funcp)transaction_98, (funcp)transaction_99, (funcp)transaction_100, (funcp)transaction_121, (funcp)transaction_125, (funcp)transaction_132, (funcp)transaction_141, (funcp)transaction_258, (funcp)transaction_275, (funcp)transaction_276};
const int NumRelocateId= 173;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dds_tb_behav/xsim.reloc",  (void **)funcTab, 173);
	iki_vhdl_file_variable_register(dp + 589488);
	iki_vhdl_file_variable_register(dp + 589544);
	iki_vhdl_file_variable_register(dp + 861896);


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
