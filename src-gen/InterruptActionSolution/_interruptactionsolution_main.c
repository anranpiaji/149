#include "include/api/api.h"
#include "include/InterruptActionSolution/InterruptActionSolution.h"
#include "_interruptactionsolution_main.h"
// *********** From the preamble, verbatim:
#line 16 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
static void* action;
void callback(uint gpio, uint32_t event_mask){
        lf_schedule(action,0);
    }

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/set.h"
void _interruptactionsolution_mainreaction_function_0(void* instance_args) {
    _interruptactionsolution_main_main_self_t* self = (_interruptactionsolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _interruptactionsolution_main_a_t* a = &self->_lf_a;
    #line 23 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    bool irq_on= true;
    gpio_init(PICO_DEFAULT_LED_PIN);
    gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_IN);
    gpio_set_irq_enabled_with_callback(
    PICO_DEFAULT_LED_PIN,
    GPIO_IRQ_EDGE_RISE,
    irq_on,
    callback 
    ); 
    action = a;
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _interruptactionsolution_mainreaction_function_1(void* instance_args) {
    _interruptactionsolution_main_main_self_t* self = (_interruptactionsolution_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Expose the action struct as a local variable whose name matches the action name.
    _interruptactionsolution_main_a_t* a = &self->_lf_a;
    // Set the fields of the action struct to match the current trigger.
    a->is_present = (bool)self->_lf__a.status;
    a->has_value = ((self->_lf__a.tmplt.token) != NULL && (self->_lf__a.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)a, (self->_lf__a.tmplt.token));
    #line 35 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    instant_t elapsed_logical_time=lf_time_logical_elapsed();
    printf("Logical time is:%lld nsec.\n",elapsed_logical_time);
}
#include "include/api/set_undef.h"
_interruptactionsolution_main_main_self_t* new__interruptactionsolution_main() {
    _interruptactionsolution_main_main_self_t* self = (_interruptactionsolution_main_main_self_t*)_lf_new_reactor(sizeof(_interruptactionsolution_main_main_self_t));
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf_a._base.trigger = &self->_lf__a;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf_a.parent = (self_base_t*)self;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.number = 0;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.function = _interruptactionsolution_mainreaction_function_0;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.self = self;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.name = "?";
    #line 22 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.number = 1;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.function = _interruptactionsolution_mainreaction_function_1;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.self = self;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.name = "?";
    #line 34 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a.last = NULL;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a_reactions[0] = &self->_lf__reaction_1;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a.reactions = &self->_lf__a_reactions[0];
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a.number_of_reactions = 1;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    #ifdef FEDERATED
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    self->_lf__a.physical_time_of_arrival = NEVER;
    #line 21 "/home/foobar/zhanganran/149/src/InterruptActionSolution.lf"
    #endif // FEDERATED
    self->_lf__a.is_physical = true;
    
    self->_lf__a.tmplt.type.element_size = 0;
    self->_lf_a.type.element_size = 0;
    return self;
}
