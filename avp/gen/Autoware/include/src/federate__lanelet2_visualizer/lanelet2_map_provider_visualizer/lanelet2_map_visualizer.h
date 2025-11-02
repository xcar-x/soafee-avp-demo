#ifndef _lanelet2_map_visualizer_H
#define _lanelet2_map_visualizer_H
#ifndef _LANELET2_MAP_VISUALIZER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1125870393_H
#define TOP_LEVEL_PREAMBLE_1125870393_H
/*Correspondence: Range: [(7, 4), (12, 24)) -> Range: [(0, 0), (5, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf)*/#include <visualization_msgs/msg/marker_array.hpp>
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "lanelet2_map_visualizer.hpp" /* This is AUTOWARE node */
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct lanelet2_map_visualizer_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<autoware::lanelet2_map_provider::Lanelet2MapVisualizer> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} lanelet2_map_visualizer_self_t;
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
} lanelet2_map_visualizer_map_t;
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
} lanelet2_map_visualizer_request_t;
#endif
#endif
