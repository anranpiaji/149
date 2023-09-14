#ifndef _INTERRUPTCALLBACKSOLUTION_MAIN_H
#define _INTERRUPTCALLBACKSOLUTION_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1812200214_H
#define TOP_LEVEL_PREAMBLE_1812200214_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#endif
typedef struct {
    struct self_base_t base;
    
    
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _interruptcallbacksolution_main_main_self_t;
_interruptcallbacksolution_main_main_self_t* new__interruptcallbacksolution_main();
#endif // _INTERRUPTCALLBACKSOLUTION_MAIN_H
