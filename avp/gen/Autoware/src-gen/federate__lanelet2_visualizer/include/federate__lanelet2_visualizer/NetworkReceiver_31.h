#ifndef _networkreceiver_31_H
#define _networkreceiver_31_H
#ifndef _NETWORKRECEIVER_31_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1277079886_H
#define TOP_LEVEL_PREAMBLE_1277079886_H
/*Correspondence: Range: [(54, 0), (70, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__lanelet2_visualizer.lf)*/#ifdef __cplusplus
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
/*Correspondence: Range: [(46, 0), (51, 24)) -> Range: [(0, 0), (5, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__lanelet2_visualizer.lf)*/#include <visualization_msgs/msg/marker_array.hpp>
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
typedef struct networkreceiver_31_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} networkreceiver_31_self_t;
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
} networkreceiver_31_msg_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    uint8_t* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} networkreceiver_31_networkMessage_t;
#endif
#endif
