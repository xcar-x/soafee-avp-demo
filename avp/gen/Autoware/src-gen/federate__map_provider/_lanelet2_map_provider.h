#ifndef _LANELET2_MAP_PROVIDER_H
#define _LANELET2_MAP_PROVIDER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_458840359_H
#define TOP_LEVEL_PREAMBLE_458840359_H
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lanelet2_map_provider_request_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::HADMapBin> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lanelet2_map_provider_map_t;
typedef struct {
    struct self_base_t base;
    #line 13 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_provider/lanelet2_map_provider_main.lf"
    int num_requestors;
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_lanelet2_map_provider.h"
    #line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_provider/lanelet2_map_provider_main.lf"
    autoware::lanelet2_map_provider::Lanelet2MapProviderNode* ros2_node;
#line 48 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_lanelet2_map_provider.h"
    // Multiport input array will be malloc'd later.
    _lanelet2_map_provider_request_t** _lf_request;
    int _lf_request_width;
    // Default input (in case it does not get connected)
    _lanelet2_map_provider_request_t _lf_default__request;
    // Struct to support efficiently reading sparse inputs.
    lf_sparse_io_record_t* _lf_request__sparse;
    // Array of output ports.
    _lanelet2_map_provider_map_t* _lf_map;
    int _lf_map_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    _lanelet2_map_provider_map_t** _lf_map_pointers;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__request;
    reaction_t* _lf__request_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__request_network_port_status;
    
    #endif // FEDERATED
} _lanelet2_map_provider_self_t;
_lanelet2_map_provider_self_t* new__lanelet2_map_provider();
#endif // _LANELET2_MAP_PROVIDER_H
