extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/parking_planner_main/parking_planner.h"
#include "_parking_planner.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _parking_plannerreaction_function_0(void* instance_args) {
    _parking_planner_self_t* self = (_parking_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 27 "/home/avp/soafee/soafee-avp-demo/avp/src/parking_planner/parking_planner_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + PARKING_PLANNER_PARAM;
    
    rclcpp::NodeOptions node_options = get_node_options_from_yaml(
        yaml_path.c_str(),
        "/**"
    );
    self->ros2_node = std::make_shared<autoware::motion::planning::parking_planner_nodes::ParkingPlannerNode>(node_options);
#line 22 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_parking_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _parking_plannerreaction_function_1(void* instance_args) {
    _parking_planner_self_t* self = (_parking_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _parking_planner_route_t* route = self->_lf_route;
    int route_width = self->_lf_route_width; SUPPRESS_UNUSED_WARNING(route_width);
    _parking_planner_request_t* request = &self->_lf_request;
    #line 37 "/home/avp/soafee/soafee-avp-demo/avp/src/parking_planner/parking_planner_main.lf"
    self->route_msg = *route->value;
    auto request_msg = std::make_shared<autoware_auto_msgs::srv::HADMapService_Request>(
    	self->ros2_node->create_map_request(self->route_msg));
    
    lf_set(request, request_msg);
#line 37 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_parking_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _parking_plannerreaction_function_2(void* instance_args) {
    _parking_planner_self_t* self = (_parking_planner_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _parking_planner_map_t* map = self->_lf_map;
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    _parking_planner_trajectory_t* trajectory = &self->_lf_trajectory;
    #line 45 "/home/avp/soafee/soafee-avp-demo/avp/src/parking_planner/parking_planner_main.lf"
    std::shared_ptr<lanelet::LaneletMap> lanelet_map_ptr = std::make_shared<lanelet::LaneletMap>();
    autoware::common::had_map_utils::fromBinaryMsg(*map->value, lanelet_map_ptr);
    
       auto trajectory_msg = std::make_shared<autoware_auto_msgs::msg::Trajectory>(
           self->ros2_node->plan_trajectory(self->route_msg, lanelet_map_ptr));
    
       // Only publish the trajectory if it is valid        
       if (self->ros2_node->is_trajectory_valid(*trajectory_msg)) {
           lf_set(trajectory, trajectory_msg);
       }
#line 57 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__parking_planner/_parking_planner.cpp"
}
#include "include/api/reaction_macros_undef.h"
_parking_planner_self_t* new__parking_planner() {
    _parking_planner_self_t* self = (_parking_planner_self_t*)lf_new_reactor(sizeof(_parking_planner_self_t));
    // Set input by default to an always absent default input.
    self->_lf_route = &self->_lf_default__route;
    // Set the default source reactor pointer
    self->_lf_default__route._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_map = &self->_lf_default__map;
    // Set the default source reactor pointer
    self->_lf_default__map._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _parking_plannerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _parking_plannerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _parking_plannerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__route.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__route.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__route_reactions[0] = &self->_lf__reaction_1;
    self->_lf__route.reactions = &self->_lf__route_reactions[0];
    self->_lf__route.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__route.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__route.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Route>);
    self->_lf__map.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__map.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__map_reactions[0] = &self->_lf__reaction_2;
    self->_lf__map.reactions = &self->_lf__map_reactions[0];
    self->_lf__map.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__map.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__map.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::HADMapBin>);
    return self;
}
