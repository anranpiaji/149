#include "include/api/api.h"
#include "include/InterruptCallbackSolution/InterruptCallbackSolution.h"
#include "_interruptcallbacksolution_main.h"
// *********** From the preamble, verbatim:
#line 18 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
void callback(uint gpio, uint32_t event_mask){
    printf("BUTTON State: %u%u\n", gpio,event_mask);
}

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _interruptcallbacksolution_mainreaction_function_0(void* instance_args) {
    _interruptcallbacksolution_main_main_self_t* self = (_interruptcallbacksolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 23 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    bool irq_on= true;
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_IN);
    gpio_set_irq_enabled_with_callback(
    PICO_DEFAULT_LED_PIN,
    GPIO_IRQ_EDGE_RISE,
    irq_on,
    callback 
    );
}
#include "include/api/set_undef.h"
_interruptcallbacksolution_main_main_self_t* new__interruptcallbacksolution_main() {
    _interruptcallbacksolution_main_main_self_t* self = (_interruptcallbacksolution_main_main_self_t*)_lf_new_reactor(sizeof(_interruptcallbacksolution_main_main_self_t));
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.function = _interruptcallbacksolution_mainreaction_function_0;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 22 "/home/foobar/zhanganran/149/src/InterruptCallbackSolution.lf"
    self->_lf__reaction_0.mode = NULL;
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
