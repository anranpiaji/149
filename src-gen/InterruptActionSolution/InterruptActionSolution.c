// Code generated by the Lingua Franca compiler from:
// file://home/foobar/zhanganran/149/src/InterruptActionSolution.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/home/foobar/zhanganran/149/src-gen/InterruptActionSolution"

#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
int main(void) {
   return lf_reactor_c_main(0, NULL);
}
const char* _lf_default_argv[] = { "dummy", "-k", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
#include "_interruptactionsolution_main.h"
typedef enum {
    interruptactionsolution_main,
    _num_enclaves
} _enclave_id;
// The global array of environments associated with each enclave
environment_t envs[_num_enclaves];
// 'Create' and initialize the environments in the program
void _lf_create_environments() {
    environment_init(&envs[interruptactionsolution_main],interruptactionsolution_main,_lf_number_of_workers,0,1,0,0,1,0,0,NULL);
}
// Update the pointer argument to point to the beginning of the environment array
// and return the size of that array
int _lf_get_environments(environment_t ** return_envs) {
   (*return_envs) = (environment_t *) envs;
   return _num_enclaves;
}
// No watchdogs found.
typedef void watchdog_t;
watchdog_t* _lf_watchdogs = NULL;
int _lf_watchdog_count = 0;
void _lf_initialize_trigger_objects() {
    int startup_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(startup_reaction_count);
    int shutdown_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(shutdown_reaction_count);
    int reset_reaction_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(reset_reaction_count);
    int timer_triggers_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(timer_triggers_count);
    int modal_state_reset_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_state_reset_count);
    int modal_reactor_count[_num_enclaves] = {0}; SUPPRESS_UNUSED_WARNING(modal_reactor_count);
    int bank_index;
    SUPPRESS_UNUSED_WARNING(bank_index);
    int watchdog_number = 0;
    SUPPRESS_UNUSED_WARNING(watchdog_number);
    _interruptactionsolution_main_main_self_t* interruptactionsolution_main_self[1];
    SUPPRESS_UNUSED_WARNING(interruptactionsolution_main_self);
    // ***** Start initializing InterruptActionSolution of class InterruptActionSolution
    interruptactionsolution_main_self[0] = new__interruptactionsolution_main();
    interruptactionsolution_main_self[0]->base.environment = &envs[interruptactionsolution_main];
    bank_index = 0; SUPPRESS_UNUSED_WARNING(bank_index);
    envs[interruptactionsolution_main].startup_reactions[startup_reaction_count[interruptactionsolution_main]++] = &interruptactionsolution_main_self[0]->_lf__reaction_0;
    SUPPRESS_UNUSED_WARNING(_lf_watchdog_count);
    // Initializing action InterruptActionSolution.a
    interruptactionsolution_main_self[0]->_lf__a.offset = 0;
    interruptactionsolution_main_self[0]->_lf__a.period = -1;
    interruptactionsolution_main_self[0]->_lf__a.mode = NULL;
    _lf_initialize_template((token_template_t*)
            &(interruptactionsolution_main_self[0]->_lf__a),
    0);
    interruptactionsolution_main_self[0]->_lf__a.status = absent;
    interruptactionsolution_main_self[0]->_lf__reaction_0.deadline = NEVER;
    interruptactionsolution_main_self[0]->_lf__reaction_1.deadline = NEVER;
    //***** End initializing InterruptActionSolution
    // **** Start deferred initialize for InterruptActionSolution
    {
    
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_0 of InterruptActionSolution.
        interruptactionsolution_main_self[0]->_lf__reaction_0.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 0 of InterruptActionSolution
        // Total number of outputs (single ports and multiport channels)
        // produced by reaction_1 of InterruptActionSolution.
        interruptactionsolution_main_self[0]->_lf__reaction_1.num_outputs = 0;
        {
            int count = 0; SUPPRESS_UNUSED_WARNING(count);
        }
        
        // ** End initialization for reaction 1 of InterruptActionSolution
    
    }
    // **** End of deferred initialize for InterruptActionSolution
    // **** Start non-nested deferred initialize for InterruptActionSolution
    
    
    
    // **** End of non-nested deferred initialize for InterruptActionSolution
    // Connect inputs and outputs for reactor InterruptActionSolution.
    {
        // Add action InterruptActionSolution.a to array of is_present fields.
        envs[interruptactionsolution_main].is_present_fields[0] 
                = &interruptactionsolution_main_self[0]->_lf_a.is_present;
        #ifdef FEDERATED_DECENTRALIZED
        // Add action InterruptActionSolution.a to array of intended_tag fields.
        envs[interruptactionsolution_main]._lf_intended_tag_fields[0] 
                = &interruptactionsolution_main_self[0]->_lf_a.intended_tag;
        #endif // FEDERATED_DECENTRALIZED
    }
    
    // Set reaction priorities for ReactorInstance InterruptActionSolution
    {
        interruptactionsolution_main_self[0]->_lf__reaction_0.chain_id = 1;
        // index is the OR of level 0 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        interruptactionsolution_main_self[0]->_lf__reaction_0.index = 0xffffffffffff0000LL;
        interruptactionsolution_main_self[0]->_lf__reaction_1.chain_id = 1;
        // index is the OR of level 1 and 
        // deadline 9223372036854775807 shifted left 16 bits.
        interruptactionsolution_main_self[0]->_lf__reaction_1.index = 0xffffffffffff0001LL;
    }
    

    #ifdef EXECUTABLE_PREAMBLE
    _lf_executable_preamble(&envs[0]);
    #endif
    #ifdef FEDERATED
    initialize_triggers_for_federate();
    #endif // FEDERATED
}
void logical_tag_complete(tag_t tag_to_send) {
#ifdef FEDERATED_CENTRALIZED
        _lf_logical_tag_complete(tag_to_send);
#endif // FEDERATED_CENTRALIZED

}
#ifndef FEDERATED
void terminate_execution(environment_t* env) {}
#endif
