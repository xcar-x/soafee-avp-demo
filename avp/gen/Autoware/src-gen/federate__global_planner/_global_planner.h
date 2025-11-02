#ifndef _GLOBAL_PLANNER_H
#define _GLOBAL_PLANNER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_186868614_H
#define TOP_LEVEL_PREAMBLE_186868614_H
#include "lanelet2_global_planner_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _global_planner_vehicle_kinematic_state_t;
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
} _global_planner_map_t;
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
} _global_planner_global_path_t;
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
} _global_planner_map_request_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    autoware_auto_msgs::msg::Route* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _global_planner_ros2_bridge_t;
typedef struct {
    struct self_base_t base;
#line 88 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.h"
    #line 20 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    std::shared_ptr<autoware::planning::lanelet2_global_planner_nodes::Lanelet2GlobalPlannerNode> ros2_node;
    #line 21 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    std::thread spin_thread;
#line 93 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.h"
    _global_planner_ros2_bridge_t _lf_ros2_bridge;
    _global_planner_vehicle_kinematic_state_t* _lf_vehicle_kinematic_state;
    // width of -2 indicates that it is not a multiport.
    int _lf_vehicle_kinematic_state_width;
    // Default input (in case it does not get connected)
    _global_planner_vehicle_kinematic_state_t _lf_default__vehicle_kinematic_state;
    _global_planner_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _global_planner_map_t _lf_default__map;
    _global_planner_global_path_t _lf_global_path;
    int _lf_global_path_width;
    _global_planner_map_request_t _lf_map_request;
    int _lf_map_request_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__ros2_bridge;
    reaction_t* _lf__ros2_bridge_reactions[1];
    trigger_t _lf__vehicle_kinematic_state;
    reaction_t* _lf__vehicle_kinematic_state_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__map;
    reaction_t* _lf__map_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _global_planner_self_t;
_global_planner_self_t* new__global_planner();
#endif // _GLOBAL_PLANNER_H
