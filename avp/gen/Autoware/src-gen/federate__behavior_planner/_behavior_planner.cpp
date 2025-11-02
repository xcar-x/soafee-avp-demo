extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/behavior_planner_main/behavior_planner.h"
#include "_behavior_planner.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_0(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 69 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    static std::string yaml_path = get_lfavp_config() + "/param/" + BEHAVIOR_PLANNER_PARAM;
    
    rclcpp::NodeOptions node_options = get_node_options_from_yaml(
        yaml_path.c_str(),
        "/**"
    );
    
    node_options.append_parameter_override("enable_object_collision_estimator", true);
    
    self->ros2_node = std::make_shared<autoware::behavior_planner_nodes::BehaviorPlannerNode>(node_options);
    self->spin_thread = create_spin_thread(self->ros2_node);
#line 26 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_1(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_vehicle_state_report_t* vehicle_state_report = self->_lf_vehicle_state_report;
    int vehicle_state_report_width = self->_lf_vehicle_state_report_width; SUPPRESS_UNUSED_WARNING(vehicle_state_report_width);
    #line 84 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    self->ros2_node->on_vehicle_state_report(vehicle_state_report->value);
#line 36 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
void _behavior_planner_STP_function1(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_vehicle_state_report_t* vehicle_state_report = self->_lf_vehicle_state_report;
    int vehicle_state_report_width = self->_lf_vehicle_state_report_width; SUPPRESS_UNUSED_WARNING(vehicle_state_report_width);
    #line 86 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    instant_t intended_tag = vehicle_state_report->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `vehicle_state_report`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
#line 52 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_2(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _behavior_planner_original_trajectory_t* original_trajectory = &self->_lf_original_trajectory;
    _behavior_planner_vehicle_state_command_t* vehicle_state_command = &self->_lf_vehicle_state_command;
    _behavior_planner_lane_route_t* lane_route = &self->_lf_lane_route;
    _behavior_planner_parking_route_t* parking_route = &self->_lf_parking_route;
    #line 103 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    self->ros2_node->on_ego_state(vehicle_kinematic_state->value);
    
    // Check if any of the state variables are set. If so, send them.
    if (self->ros2_node->m_lane_route != nullptr) {
        lf_set(lane_route, self->ros2_node->m_lane_route);
        self->ros2_node->m_lane_route.reset();
    }
    
    if (self->ros2_node->m_parking_route != nullptr) {
        lf_set(parking_route, self->ros2_node->m_parking_route);
        self->ros2_node->m_parking_route.reset();
    }
    
    if (self->ros2_node->m_state_command != nullptr) {
        lf_set(vehicle_state_command, self->ros2_node->m_state_command);
        self->ros2_node->m_state_command.reset();
    }
    
    // Send both trajectories to the modify-path.
    if (self->ros2_node->m_trajectory != nullptr) {
        lf_set(original_trajectory, self->ros2_node->m_trajectory);
        self->ros2_node->m_trajectory.reset();
    }
    
    if (self->ros2_node->m_trajectory_to_modify != nullptr) {
        lf_set(original_trajectory, self->ros2_node->m_trajectory_to_modify);
        self->ros2_node->m_trajectory_to_modify.reset();
    }
#line 93 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
void _behavior_planner_STP_function2(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _behavior_planner_original_trajectory_t* original_trajectory = &self->_lf_original_trajectory;
    _behavior_planner_vehicle_state_command_t* vehicle_state_command = &self->_lf_vehicle_state_command;
    _behavior_planner_lane_route_t* lane_route = &self->_lf_lane_route;
    _behavior_planner_parking_route_t* parking_route = &self->_lf_parking_route;
    #line 132 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    // Catch this STP violation because it will ruin the simultaneity downstream at mpc_controller.
    instant_t intended_tag = vehicle_kinematic_state->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `vehicle_kinematic_state`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
#line 114 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
void _behavior_planner_deadline_function2(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _behavior_planner_original_trajectory_t* original_trajectory = &self->_lf_original_trajectory;
    _behavior_planner_vehicle_state_command_t* vehicle_state_command = &self->_lf_vehicle_state_command;
    _behavior_planner_lane_route_t* lane_route = &self->_lf_lane_route;
    _behavior_planner_parking_route_t* parking_route = &self->_lf_parking_route;
    #line 143 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    lf_print_error("Dropping stale vehicle_kinematic_state");
#line 126 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_3(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_global_path_t* global_path = self->_lf_global_path;
    int global_path_width = self->_lf_global_path_width; SUPPRESS_UNUSED_WARNING(global_path_width);
    _behavior_planner_map_request_t* map_request = &self->_lf_map_request;
    #line 148 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    if (self->ros2_node->m_requesting_trajectory) {
        lf_print("Route was rejected. Route cannot be updated while communicating with trajectory planners.");
    } else if (!self->ros2_node->m_planner->is_vehicle_stopped(self->ros2_node->m_ego_state)) {
        lf_print("Route was rejected. Route cannot be update while the vehicle is moving");
    } else {
        lf_print("Received route");
        self->ros2_node->m_route = std::move(global_path->value);
        auto request = std::make_shared<autoware_auto_msgs::srv::HADMapService::Request>();
        request->requested_primitives.push_back(autoware_auto_msgs::srv::HADMapService::Request::FULL_MAP);
        lf_set(map_request, request);
    }
#line 147 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_4(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_map_t* map = self->_lf_map;
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    #line 163 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    lf_print("Received map");
    // Pass a future to the callback function
    self->ros2_node->map_response(
        create_future_from_service<
        autoware_auto_msgs::srv::HADMapService,
        autoware_auto_msgs::msg::HADMapBin
        >(map->value)
    );
#line 164 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_5(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_lane_trajectory_t* lane_trajectory = self->_lf_lane_trajectory;
    int lane_trajectory_width = self->_lf_lane_trajectory_width; SUPPRESS_UNUSED_WARNING(lane_trajectory_width);
    _behavior_planner_parking_trajectory_t* parking_trajectory = self->_lf_parking_trajectory;
    int parking_trajectory_width = self->_lf_parking_trajectory_width; SUPPRESS_UNUSED_WARNING(parking_trajectory_width);
    #line 175 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    if (lane_trajectory->is_present && parking_trajectory->is_present) {
        lf_print_error("Both trajectories present!");
    }
    auto trajectory = (lane_trajectory->is_present) ? 
        *lane_trajectory->value.get() : *parking_trajectory->value.get();
    
    if (!trajectory.points.empty()){
        lf_print("Received trajectory from planner");
    } else {
        lf_print_error("Planner failed to calculate!!");
    }
    
    trajectory.header.frame_id = "map";
    self->ros2_node->m_debug_trajectory_pub->publish(trajectory);
    
    self->ros2_node->m_planner->set_trajectory(trajectory);
    
    // finished requesting trajectory
    self->ros2_node->m_requesting_trajectory = false;
#line 194 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_6(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_modified_trajectory_t* modified_trajectory = self->_lf_modified_trajectory;
    int modified_trajectory_width = self->_lf_modified_trajectory_width; SUPPRESS_UNUSED_WARNING(modified_trajectory_width);
    _behavior_planner_control_trajectory_t* control_trajectory = &self->_lf_control_trajectory;
    #line 198 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    // lf_print("Received modified trajectory.");
    // Initialize with modified trajectory from object collision estimator.
    auto trajectory = modified_trajectory->value;
    
    // Set current position with velocity zero to do emergency stop in case
    // collision estimator fails or if there is obstacle on first point
    if (trajectory->points.empty()) {
        auto stopping_point = self->ros2_node->m_ego_state.state;
        stopping_point.longitudinal_velocity_mps = 0.0;
        trajectory->points.push_back(stopping_point);
    }
    lf_set(control_trajectory, trajectory);
#line 216 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
void _behavior_planner_STP_function6(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_modified_trajectory_t* modified_trajectory = self->_lf_modified_trajectory;
    int modified_trajectory_width = self->_lf_modified_trajectory_width; SUPPRESS_UNUSED_WARNING(modified_trajectory_width);
    _behavior_planner_control_trajectory_t* control_trajectory = &self->_lf_control_trajectory;
    #line 211 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    // Catch this STP violation because it will ruin the simultaneity downstream at mpc_controller.
    instant_t intended_tag = modified_trajectory->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `modified_trajectory`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
#line 234 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
void _behavior_planner_deadline_function6(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _behavior_planner_modified_trajectory_t* modified_trajectory = self->_lf_modified_trajectory;
    int modified_trajectory_width = self->_lf_modified_trajectory_width; SUPPRESS_UNUSED_WARNING(modified_trajectory_width);
    _behavior_planner_control_trajectory_t* control_trajectory = &self->_lf_control_trajectory;
    #line 222 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    lf_print_error("Discaring stale modified_trajectory");
#line 243 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _behavior_plannerreaction_function_7(void* instance_args) {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 226 "/home/avp/soafee/soafee-avp-demo/avp/src/behavior_planner/behavior_planner_main.lf"
    self->spin_thread.join();
#line 252 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__behavior_planner/_behavior_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
_behavior_planner_self_t* new__behavior_planner() {
    _behavior_planner_self_t* self = (_behavior_planner_self_t*)lf_new_reactor(sizeof(_behavior_planner_self_t));
    // Set input by default to an always absent default input.
    self->_lf_global_path = &self->_lf_default__global_path;
    // Set the default source reactor pointer
    self->_lf_default__global_path._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_map = &self->_lf_default__map;
    // Set the default source reactor pointer
    self->_lf_default__map._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_vehicle_kinematic_state = &self->_lf_default__vehicle_kinematic_state;
    // Set the default source reactor pointer
    self->_lf_default__vehicle_kinematic_state._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_vehicle_state_report = &self->_lf_default__vehicle_state_report;
    // Set the default source reactor pointer
    self->_lf_default__vehicle_state_report._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_lane_trajectory = &self->_lf_default__lane_trajectory;
    // Set the default source reactor pointer
    self->_lf_default__lane_trajectory._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_parking_trajectory = &self->_lf_default__parking_trajectory;
    // Set the default source reactor pointer
    self->_lf_default__parking_trajectory._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_modified_trajectory = &self->_lf_default__modified_trajectory;
    // Set the default source reactor pointer
    self->_lf_default__modified_trajectory._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _behavior_plannerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _behavior_plannerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = &_behavior_planner_STP_function1;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _behavior_plannerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = &_behavior_planner_deadline_function2;
    self->_lf__reaction_2.STP_handler = &_behavior_planner_STP_function2;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _behavior_plannerreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _behavior_plannerreaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _behavior_plannerreaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
    self->_lf__reaction_6.number = 6;
    self->_lf__reaction_6.function = _behavior_plannerreaction_function_6;
    self->_lf__reaction_6.self = self;
    self->_lf__reaction_6.deadline_violation_handler = &_behavior_planner_deadline_function6;
    self->_lf__reaction_6.STP_handler = &_behavior_planner_STP_function6;
    self->_lf__reaction_6.name = "?";
    self->_lf__reaction_6.mode = NULL;
    self->_lf__reaction_7.number = 7;
    self->_lf__reaction_7.function = _behavior_plannerreaction_function_7;
    self->_lf__reaction_7.self = self;
    self->_lf__reaction_7.deadline_violation_handler = NULL;
    self->_lf__reaction_7.STP_handler = NULL;
    self->_lf__reaction_7.name = "?";
    self->_lf__reaction_7.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_7;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__global_path.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__global_path.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__global_path_reactions[0] = &self->_lf__reaction_3;
    self->_lf__global_path.reactions = &self->_lf__global_path_reactions[0];
    self->_lf__global_path.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__global_path.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__global_path.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Route>);
    self->_lf__map.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__map.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__map_reactions[0] = &self->_lf__reaction_4;
    self->_lf__map.reactions = &self->_lf__map_reactions[0];
    self->_lf__map.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__map.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__map.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::HADMapBin>);
    self->_lf__vehicle_kinematic_state.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state_reactions[0] = &self->_lf__reaction_2;
    self->_lf__vehicle_kinematic_state.reactions = &self->_lf__vehicle_kinematic_state_reactions[0];
    self->_lf__vehicle_kinematic_state.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__vehicle_kinematic_state.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__vehicle_kinematic_state.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState>);
    self->_lf__vehicle_state_report.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__vehicle_state_report.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__vehicle_state_report_reactions[0] = &self->_lf__reaction_1;
    self->_lf__vehicle_state_report.reactions = &self->_lf__vehicle_state_report_reactions[0];
    self->_lf__vehicle_state_report.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__vehicle_state_report.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__vehicle_state_report.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleStateReport>);
    self->_lf__lane_trajectory.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__lane_trajectory.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__lane_trajectory_reactions[0] = &self->_lf__reaction_5;
    self->_lf__lane_trajectory.reactions = &self->_lf__lane_trajectory_reactions[0];
    self->_lf__lane_trajectory.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__lane_trajectory.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__lane_trajectory.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Trajectory>);
    self->_lf__parking_trajectory.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__parking_trajectory.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__parking_trajectory_reactions[0] = &self->_lf__reaction_5;
    self->_lf__parking_trajectory.reactions = &self->_lf__parking_trajectory_reactions[0];
    self->_lf__parking_trajectory.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__parking_trajectory.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__parking_trajectory.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Trajectory>);
    self->_lf__modified_trajectory.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__modified_trajectory.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__modified_trajectory_reactions[0] = &self->_lf__reaction_6;
    self->_lf__modified_trajectory.reactions = &self->_lf__modified_trajectory_reactions[0];
    self->_lf__modified_trajectory.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__modified_trajectory.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__modified_trajectory.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Trajectory>);
    return self;
}
