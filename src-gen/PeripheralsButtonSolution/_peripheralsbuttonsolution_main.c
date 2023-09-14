#include "include/api/api.h"
#include "include/PeripheralsButtonSolution/PeripheralsButtonSolution.h"
#include "_peripheralsbuttonsolution_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _peripheralsbuttonsolution_mainreaction_function_0(void* instance_args) {
    _peripheralsbuttonsolution_main_main_self_t* self = (_peripheralsbuttonsolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 29 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_IN);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _peripheralsbuttonsolution_mainreaction_function_1(void* instance_args) {
    _peripheralsbuttonsolution_main_main_self_t* self = (_peripheralsbuttonsolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    struct d {
        _display_line0_t* line0;
    
    } d;
    d.line0 = &(self->_lf_d.line0);
    #line 33 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    uint32_t mask = 1ul << PICO_DEFAULT_LED_PIN;
    static char buf0[17];
    // snprintf(buf0, 17, "push");
    // lf_set(d.line0, buf0);
    printf("LED State: %b\n", !!((1ul << PICO_DEFAULT_LED_PIN) & sio_hw->gpio_in)==0);
    if(!!((1ul << PICO_DEFAULT_LED_PIN) & sio_hw->gpio_in)==0)
    {
        snprintf(buf0, 17, "low");
        lf_set(d.line0, buf0);
    }
    else{
        snprintf(buf0, 17, "high");
        lf_set(d.line0, buf0);
    }
}
#include "include/api/set_undef.h"
_peripheralsbuttonsolution_main_main_self_t* new__peripheralsbuttonsolution_main() {
    _peripheralsbuttonsolution_main_main_self_t* self = (_peripheralsbuttonsolution_main_main_self_t*)_lf_new_reactor(sizeof(_peripheralsbuttonsolution_main_main_self_t));
    // Set the _width variable for all cases. This will be -2
    // if the reactor is not a bank of reactors.
    self->_lf_d_width = -2;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.function = _peripheralsbuttonsolution_mainreaction_function_0;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 28 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.number = 1;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.function = _peripheralsbuttonsolution_mainreaction_function_1;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.self = self;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.name = "?";
    #line 32 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__reaction_1.mode = NULL;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t.last = NULL;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t_reactions[0] = &self->_lf__reaction_1;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t.number_of_reactions = 1;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    #ifdef FEDERATED
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    self->_lf__t.physical_time_of_arrival = NEVER;
    #line 24 "/home/foobar/zhanganran/149/src/PeripheralsButtonSolution.lf"
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
