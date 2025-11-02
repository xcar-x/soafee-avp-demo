#ifndef _LANELET2_MAP_VISUALIZER_H
#define _LANELET2_MAP_VISUALIZER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1125870393_H
#define TOP_LEVEL_PREAMBLE_1125870393_H
#include <visualization_msgs/msg/marker_array.hpp>
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "lanelet2_map_visualizer.hpp" /* This is AUTOWARE node */
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
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
} _lanelet2_map_visualizer_map_t;
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
} _lanelet2_map_visualizer_request_t;
typedef struct {
    struct self_base_t base;
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_lanelet2_map_visualizer.h"
    #line 21 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf"
    std::shared_ptr<autoware::lanelet2_map_provider::Lanelet2MapVisualizer> ros2_node;
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf"
    std::thread spin_thread;
#line 51 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_lanelet2_map_visualizer.h"
    _lanelet2_map_visualizer_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _lanelet2_map_visualizer_map_t _lf_default__map;
    _lanelet2_map_visualizer_request_t _lf_request;
    int _lf_request_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__map;
    reaction_t* _lf__map_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _lanelet2_map_visualizer_self_t;
_lanelet2_map_visualizer_self_t* new__lanelet2_map_visualizer();
#endif // _LANELET2_MAP_VISUALIZER_H
