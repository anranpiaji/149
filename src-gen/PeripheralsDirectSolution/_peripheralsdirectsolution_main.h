#ifndef _PERIPHERALSDIRECTSOLUTION_MAIN_H
#define _PERIPHERALSDIRECTSOLUTION_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1894287849_H
#define TOP_LEVEL_PREAMBLE_1894287849_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#endif
typedef struct {
    struct self_base_t base;
    
    #line 23 "/home/foobar/zhanganran/149/src/PeripheralsDirectSolution.lf"
    bool led_on;
    #line 25 "/home/foobar/zhanganran/149/src/PeripheralsDirectSolution.lf"
    reaction_t _lf__reaction_0;
    #line 29 "/home/foobar/zhanganran/149/src/PeripheralsDirectSolution.lf"
    reaction_t _lf__reaction_1;
    #line 22 "/home/foobar/zhanganran/149/src/PeripheralsDirectSolution.lf"
    trigger_t _lf__t;
    #line 22 "/home/foobar/zhanganran/149/src/PeripheralsDirectSolution.lf"
    reaction_t* _lf__t_reactions[1];
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _peripheralsdirectsolution_main_main_self_t;
_peripheralsdirectsolution_main_main_self_t* new__peripheralsdirectsolution_main();
#endif // _PERIPHERALSDIRECTSOLUTION_MAIN_H
