#ifndef _PERIPHERALSBUTTONSOLUTION_MAIN_H
#define _PERIPHERALSBUTTONSOLUTION_MAIN_H
#include "include/core/reactor.h"
#include "_display.h"
#ifndef TOP_LEVEL_PREAMBLE_1454136448_H
#define TOP_LEVEL_PREAMBLE_1454136448_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
typedef struct {
    struct self_base_t base;
    
    #line 25 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    bool led_on;
    struct {
        #line 25 "/home/foobar/zhanganran/149/src/lib/Display.lf"
        _display_line0_t line0;
    } _lf_d;
    int _lf_d_width;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    reaction_t _lf__reaction_0;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    reaction_t _lf__reaction_1;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    trigger_t _lf__t;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _peripheralsbuttonsolution_main_main_self_t;
_peripheralsbuttonsolution_main_main_self_t* new__peripheralsbuttonsolution_main();
#endif // _PERIPHERALSBUTTONSOLUTION_MAIN_H
