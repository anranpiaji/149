#ifndef _INTERRUPTDEBOUNCEDSOLUTION_MAIN_H
#define _INTERRUPTDEBOUNCEDSOLUTION_MAIN_H
#include "include/core/reactor.h"
#ifndef TOP_LEVEL_PREAMBLE_1776589441_H
#define TOP_LEVEL_PREAMBLE_1776589441_H
#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;

    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _interruptdebouncedsolution_main_a_t;
typedef struct {
    struct self_base_t base;
    
    
    #line 27 "/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf"
    _interruptdebouncedsolution_main_a_t _lf_a;
    #line 28 "/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf"
    reaction_t _lf__reaction_0;
    #line 41 "/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 27 "/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf"
    trigger_t _lf__a;
    #line 27 "/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf"
    reaction_t* _lf__a_reactions[1];
} _interruptdebouncedsolution_main_main_self_t;
_interruptdebouncedsolution_main_main_self_t* new__interruptdebouncedsolution_main();
#endif // _INTERRUPTDEBOUNCEDSOLUTION_MAIN_H
