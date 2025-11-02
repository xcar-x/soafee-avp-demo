#ifndef _PARKING_PLANNER_H
#define _PARKING_PLANNER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_168490492_H
#define TOP_LEVEL_PREAMBLE_168490492_H
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "parking_planner_nodes/parking_planner_node.hpp"
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
} _parking_planner_route_t;
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
} _parking_planner_map_t;
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
} _parking_planner_request_t;
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
} _parking_planner_trajectory_t;
typedef struct {
    struct self_base_t base;
#line 74 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_parking_planner.h"
    #line 23 "/home/avp/soafee/soafee-avp-demo/avp/src/parking_planner/parking_planner_main.lf"
    autoware_auto_msgs::msg::Route route_msg;
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/parking_planner/parking_planner_main.lf"
    std::shared_ptr<autoware::motion::planning::parking_planner_nodes::ParkingPlannerNode> ros2_node;
#line 79 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_parking_planner.h"
    _parking_planner_route_t* _lf_route;
    // width of -2 indicates that it is not a multiport.
    int _lf_route_width;
    // Default input (in case it does not get connected)
    _parking_planner_route_t _lf_default__route;
    _parking_planner_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _parking_planner_map_t _lf_default__map;
    _parking_planner_request_t _lf_request;
    int _lf_request_width;
    _parking_planner_trajectory_t _lf_trajectory;
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
} _parking_planner_self_t;
_parking_planner_self_t* new__parking_planner();
#endif // _PARKING_PLANNER_H
