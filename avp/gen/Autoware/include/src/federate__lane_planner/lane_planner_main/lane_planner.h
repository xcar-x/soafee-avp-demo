#ifndef _lane_planner_H
#define _lane_planner_H
#ifndef _LANE_PLANNER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1630479470_H
#define TOP_LEVEL_PREAMBLE_1630479470_H
/*Correspondence: Range: [(7, 4), (13, 24)) -> Range: [(0, 0), (6, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/lane_planner/lane_planner_main.lf)*/#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "motion_common/motion_common.hpp"
#include "lane_planner_nodes/lane_planner_node.hpp"
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
typedef struct lane_planner_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    autoware_auto_msgs::msg::Route route_msg;
    std::shared_ptr<autoware::lane_planner_nodes::LanePlannerNode> ros2_node;
    int end[0]; // placeholder; MSVC does not compile empty structs
} lane_planner_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Route> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} lane_planner_route_t;
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
} lane_planner_map_t;
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
} lane_planner_request_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} lane_planner_trajectory_t;
#endif
#endif
