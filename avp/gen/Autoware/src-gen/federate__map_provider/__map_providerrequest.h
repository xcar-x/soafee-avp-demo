#ifndef __MAP_PROVIDERREQUEST_H
#define __MAP_PROVIDERREQUEST_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_335541164_H
#define TOP_LEVEL_PREAMBLE_335541164_H
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
#include "rcutils/allocator.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rclcpp/serialized_message.hpp"
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
} __map_providerrequest_port0_t;
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
} __map_providerrequest_port1_t;
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
} __map_providerrequest_port2_t;
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
} __map_providerrequest_port3_t;
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
} __map_providerrequest_port4_t;
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
} __map_providerrequest_port5_t;
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
} __map_providerrequest_port_t;
typedef struct {
    struct self_base_t base;
#line 130 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/__map_providerrequest.h"
#line 131 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/__map_providerrequest.h"
    __map_providerrequest_port0_t* _lf_port0;
    // width of -2 indicates that it is not a multiport.
    int _lf_port0_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port0_t _lf_default__port0;
    __map_providerrequest_port1_t* _lf_port1;
    // width of -2 indicates that it is not a multiport.
    int _lf_port1_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port1_t _lf_default__port1;
    __map_providerrequest_port2_t* _lf_port2;
    // width of -2 indicates that it is not a multiport.
    int _lf_port2_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port2_t _lf_default__port2;
    __map_providerrequest_port3_t* _lf_port3;
    // width of -2 indicates that it is not a multiport.
    int _lf_port3_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port3_t _lf_default__port3;
    __map_providerrequest_port4_t* _lf_port4;
    // width of -2 indicates that it is not a multiport.
    int _lf_port4_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port4_t _lf_default__port4;
    __map_providerrequest_port5_t* _lf_port5;
    // width of -2 indicates that it is not a multiport.
    int _lf_port5_width;
    // Default input (in case it does not get connected)
    __map_providerrequest_port5_t _lf_default__port5;
    // Array of output ports.
    __map_providerrequest_port_t* _lf_port;
    int _lf_port_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    __map_providerrequest_port_t** _lf_port_pointers;
    trigger_t _lf__port0;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port1;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port2;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port3;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port4;
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__port5;
    #ifdef FEDERATED
    
    #endif // FEDERATED
} __map_providerrequest_self_t;
__map_providerrequest_self_t* new___map_providerrequest();
#endif // __MAP_PROVIDERREQUEST_H
