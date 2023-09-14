#ifndef _peripheralsbuttonsolution_main_H
#define _peripheralsbuttonsolution_main_H
#ifndef TOP_LEVEL_PREAMBLE_1454136448_H
#define TOP_LEVEL_PREAMBLE_1454136448_H
/*Correspondence: Range: [(15, 4), (17, 26)) -> Range: [(0, 0), (2, 26)) (verbatim=true; src=/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf)*/#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>
/*Correspondence: Range: [(18, 2), (19, 68)) -> Range: [(0, 0), (1, 68)) (verbatim=true; src=/home/foobar/zhanganran/149/src/lib/Display.lf)*/#include <pico/stdlib.h>
#include <display.h>        // Do not use "display.h". Doesn't work.
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct peripheralsbuttonsolution_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    bool led_on;
    int end[0]; // placeholder; MSVC does not compile empty structs
} peripheralsbuttonsolution_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} display_line0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} display_line1_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} display_line2_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    string value;

} display_line3_t;
#endif
