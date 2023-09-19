#ifndef _interruptdebouncedsolution_main_H
#define _interruptdebouncedsolution_main_H
#ifndef TOP_LEVEL_PREAMBLE_1776589441_H
#define TOP_LEVEL_PREAMBLE_1776589441_H
/*Correspondence: Range: [(9, 4), (11, 26)) -> Range: [(0, 0), (2, 26)) (verbatim=true; src=/home/foobar/lf-3pi-Hanson-Li-lchanggle/src/InterruptDebouncedSolution.lf)*/#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct interruptdebouncedsolution_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} interruptdebouncedsolution_self_t;
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
} interruptdebouncedsolution_a_t;
#endif
