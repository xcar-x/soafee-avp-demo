#ifndef _BEHAVIOR_PLANNER_H
#define _BEHAVIOR_PLANNER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_348745416_H
#define TOP_LEVEL_PREAMBLE_348745416_H
#include "lanelet2_core/LaneletMap.h"
#include "had_map_utils/had_map_conversion.hpp"
#include "had_map_utils/had_map_query.hpp"
#include "autoware_auto_msgs/msg/vehicle_kinematic_state.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_report.hpp"
#include "autoware_auto_msgs/msg/vehicle_state_command.hpp"
#include "behavior_planner.hpp"
#include "behavior_planner_node.hpp"
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
} _behavior_planner_global_path_t;
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
} _behavior_planner_map_t;
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
} _behavior_planner_vehicle_kinematic_state_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleStateReport> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _behavior_planner_vehicle_state_report_t;
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
} _behavior_planner_lane_trajectory_t;
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
} _behavior_planner_parking_trajectory_t;
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
} _behavior_planner_modified_trajectory_t;
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
} _behavior_planner_map_request_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleStateCommand> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _behavior_planner_vehicle_state_command_t;
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
} _behavior_planner_lane_route_t;
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
} _behavior_planner_parking_route_t;
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
} _behavior_planner_original_trajectory_t;
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
} _behavior_planner_control_trajectory_t;
typedef struct {
    struct self_base_t base;
#line 204 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.h"
    #line 62 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    std::shared_ptr<autoware::behavior_planner_nodes::BehaviorPlannerNode> ros2_node;
    #line 63 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    std::thread spin_thread;
    #line 64 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    autoware_auto_msgs::msg::Route global_path_route;
    #line 65 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    std::chrono::time_point<std::chrono::system_clock> previous_output_arrived_goal;
    #line 66 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    std::chrono::time_point<std::chrono::system_clock> previous_output;
#line 215 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.h"
    _behavior_planner_global_path_t* _lf_global_path;
    // width of -2 indicates that it is not a multiport.
    int _lf_global_path_width;
    // Default input (in case it does not get connected)
    _behavior_planner_global_path_t _lf_default__global_path;
    _behavior_planner_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _behavior_planner_map_t _lf_default__map;
    _behavior_planner_vehicle_kinematic_state_t* _lf_vehicle_kinematic_state;
    // width of -2 indicates that it is not a multiport.
    int _lf_vehicle_kinematic_state_width;
    // Default input (in case it does not get connected)
    _behavior_planner_vehicle_kinematic_state_t _lf_default__vehicle_kinematic_state;
    _behavior_planner_vehicle_state_report_t* _lf_vehicle_state_report;
    // width of -2 indicates that it is not a multiport.
    int _lf_vehicle_state_report_width;
    // Default input (in case it does not get connected)
    _behavior_planner_vehicle_state_report_t _lf_default__vehicle_state_report;
    _behavior_planner_lane_trajectory_t* _lf_lane_trajectory;
    // width of -2 indicates that it is not a multiport.
    int _lf_lane_trajectory_width;
    // Default input (in case it does not get connected)
    _behavior_planner_lane_trajectory_t _lf_default__lane_trajectory;
    _behavior_planner_parking_trajectory_t* _lf_parking_trajectory;
    // width of -2 indicates that it is not a multiport.
    int _lf_parking_trajectory_width;
    // Default input (in case it does not get connected)
    _behavior_planner_parking_trajectory_t _lf_default__parking_trajectory;
    _behavior_planner_modified_trajectory_t* _lf_modified_trajectory;
    // width of -2 indicates that it is not a multiport.
    int _lf_modified_trajectory_width;
    // Default input (in case it does not get connected)
    _behavior_planner_modified_trajectory_t _lf_default__modified_trajectory;
    _behavior_planner_map_request_t _lf_map_request;
    int _lf_map_request_width;
    _behavior_planner_vehicle_state_command_t _lf_vehicle_state_command;
    int _lf_vehicle_state_command_width;
    _behavior_planner_lane_route_t _lf_lane_route;
    int _lf_lane_route_width;
    _behavior_planner_parking_route_t _lf_parking_route;
    int _lf_parking_route_width;
    _behavior_planner_original_trajectory_t _lf_original_trajectory;
    int _lf_original_trajectory_width;
    _behavior_planner_control_trajectory_t _lf_control_trajectory;
    int _lf_control_trajectory_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    reaction_t _lf__reaction_6;
    reaction_t _lf__reaction_7;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__global_path;
    reaction_t* _lf__global_path_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__map;
    reaction_t* _lf__map_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__vehicle_kinematic_state;
    reaction_t* _lf__vehicle_kinematic_state_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__vehicle_state_report;
    reaction_t* _lf__vehicle_state_report_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__lane_trajectory;
    reaction_t* _lf__lane_trajectory_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__parking_trajectory;
    reaction_t* _lf__parking_trajectory_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__modified_trajectory;
    reaction_t* _lf__modified_trajectory_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _behavior_planner_self_t;
_behavior_planner_self_t* new__behavior_planner();
#endif // _BEHAVIOR_PLANNER_H
