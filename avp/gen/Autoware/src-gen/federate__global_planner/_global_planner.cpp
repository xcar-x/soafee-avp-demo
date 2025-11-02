extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/global_planner_main/global_planner.h"
#include "_global_planner.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _global_plannerreaction_function_0(void* instance_args) {
    _global_planner_self_t* self = (_global_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _global_planner_map_request_t* map_request = &self->_lf_map_request;
    _global_planner_ros2_bridge_t* ros2_bridge = &self->_lf_ros2_bridge;
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    // Use a try - catch for now so that if the rclcpp context is already initialized,
    // ROS doesn't throw a tantrum.
    try {
        rclcpp::init(0, NULL);
    } catch (...) { /*  Ignore */ }
    
    rclcpp::NodeOptions nodeOptions = rclcpp::NodeOptions();
    
    self->ros2_node = std::make_shared<autoware::planning::lanelet2_global_planner_nodes::Lanelet2GlobalPlannerNode>(
        nodeOptions,
        ros2_bridge,
        &lf_schedule_value
    );
    self->spin_thread = create_spin_thread(self->ros2_node);
    
    auto request = std::make_shared<autoware_auto_msgs::srv::HADMapService_Request>();
    request->requested_primitives.push_back(
        autoware_auto_msgs::srv::HADMapService_Request::FULL_MAP);
    
    lf_set(map_request, request);
#line 36 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _global_plannerreaction_function_1(void* instance_args) {
    _global_planner_self_t* self = (_global_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _global_planner_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    #line 47 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    self->ros2_node->current_pose_cb(vehicle_kinematic_state->value);
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _global_plannerreaction_function_2(void* instance_args) {
    _global_planner_self_t* self = (_global_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _global_planner_ros2_bridge_t* ros2_bridge = &self->_lf_ros2_bridge;
    // Set the fields of the action struct to match the current trigger.
    ros2_bridge->is_present = (bool)self->_lf__ros2_bridge.status;
    ros2_bridge->has_value = ((self->_lf__ros2_bridge.tmplt.token) != NULL && (self->_lf__ros2_bridge.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)ros2_bridge, (self->_lf__ros2_bridge.tmplt.token));
    if (ros2_bridge->has_value) {
        ros2_bridge->value = (autoware_auto_msgs::msg::Route*)(self->_lf__ros2_bridge.tmplt.token)->value;
        ros2_bridge->length = (self->_lf__ros2_bridge.tmplt.token)->length;
    }
    lf_critical_section_exit(self->base.environment);
    _global_planner_global_path_t* global_path = &self->_lf_global_path;
    #line 51 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    auto msg = std::make_shared<autoware_auto_msgs::msg::Route>(*ros2_bridge->value);
    lf_set(global_path, msg);
#line 68 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _global_plannerreaction_function_3(void* instance_args) {
    _global_planner_self_t* self = (_global_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _global_planner_map_t* map = self->_lf_map;
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    #line 56 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    // Convert binary map msg to lanelet2 map and set the map for global path planner
    self->ros2_node->lanelet2_global_planner->osm_map = std::make_shared<lanelet::LaneletMap>();
    autoware::common::had_map_utils::fromBinaryMsg(*map->value, self->ros2_node->lanelet2_global_planner->osm_map);
    
    // parse lanelet global path planner elements
    self->ros2_node->lanelet2_global_planner->parse_lanelet_element();
#line 83 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _global_plannerreaction_function_4(void* instance_args) {
    _global_planner_self_t* self = (_global_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 65 "/home/avp/soafee/soafee-avp-demo/avp/src/global_planner/global_planner_main.lf"
    self->spin_thread.join();
#line 92 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_global_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
_global_planner_self_t* new__global_planner() {
    _global_planner_self_t* self = (_global_planner_self_t*)lf_new_reactor(sizeof(_global_planner_self_t));
    self->_lf_ros2_bridge._base.trigger = &self->_lf__ros2_bridge;
    self->_lf_ros2_bridge.parent = (self_base_t*)self;
    self->_lf_ros2_bridge.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_vehicle_kinematic_state = &self->_lf_default__vehicle_kinematic_state;
    // Set the default source reactor pointer
    self->_lf_default__vehicle_kinematic_state._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_map = &self->_lf_default__map;
    // Set the default source reactor pointer
    self->_lf_default__map._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _global_plannerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _global_plannerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _global_plannerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _global_plannerreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _global_plannerreaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = NULL;
    self->_lf__reaction_4.STP_handler = NULL;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
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
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_4;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__ros2_bridge.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_reactions[0] = &self->_lf__reaction_2;
    self->_lf__ros2_bridge.reactions = &self->_lf__ros2_bridge_reactions[0];
    self->_lf__ros2_bridge.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ros2_bridge.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ros2_bridge.is_physical = true;
    
    self->_lf__ros2_bridge.tmplt.type.element_size = sizeof(autoware_auto_msgs::msg::Route);
    self->_lf_ros2_bridge.type.element_size = sizeof(autoware_auto_msgs::msg::Route);
    self->_lf__vehicle_kinematic_state.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state_reactions[0] = &self->_lf__reaction_1;
    self->_lf__vehicle_kinematic_state.reactions = &self->_lf__vehicle_kinematic_state_reactions[0];
    self->_lf__vehicle_kinematic_state.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__vehicle_kinematic_state.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__vehicle_kinematic_state.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState>);
    self->_lf__map.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__map.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__map_reactions[0] = &self->_lf__reaction_3;
    self->_lf__map.reactions = &self->_lf__map_reactions[0];
    self->_lf__map.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__map.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__map.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::HADMapBin>);
    return self;
}
