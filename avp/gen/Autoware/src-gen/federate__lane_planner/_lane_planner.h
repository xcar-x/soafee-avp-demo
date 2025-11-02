#ifndef _LANE_PLANNER_H
#define _LANE_PLANNER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1630479470_H
#define TOP_LEVEL_PREAMBLE_1630479470_H
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "motion_common/motion_common.hpp"
#include "lane_planner_nodes/lane_planner_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
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
} _lane_planner_route_t;
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
} _lane_planner_map_t;
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
} _lane_planner_request_t;
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
} _lane_planner_trajectory_t;
typedef struct {
    struct self_base_t base;
#line 75 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lane_planner/_lane_planner.h"
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/lane_planner/lane_planner_main.lf"
    autoware_auto_msgs::msg::Route route_msg;
    #line 26 "/home/avp/soafee/soafee-avp-demo/avp/src/lane_planner/lane_planner_main.lf"
    std::shared_ptr<autoware::lane_planner_nodes::LanePlannerNode> ros2_node;
#line 80 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lane_planner/_lane_planner.h"
    _lane_planner_route_t* _lf_route;
    // width of -2 indicates that it is not a multiport.
    int _lf_route_width;
    // Default input (in case it does not get connected)
    _lane_planner_route_t _lf_default__route;
    _lane_planner_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _lane_planner_map_t _lf_default__map;
    _lane_planner_request_t _lf_request;
    int _lf_request_width;
    _lane_planner_trajectory_t _lf_trajectory;
    int _lf_trajectory_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__route;
    reaction_t* _lf__route_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__map;
    reaction_t* _lf__map_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _lane_planner_self_t;
_lane_planner_self_t* new__lane_planner();
#endif // _LANE_PLANNER_H
