extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/lanelet2_map_provider_visualizer/lanelet2_map_visualizer.h"
#include "_lanelet2_map_visualizer.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _lanelet2_map_visualizerreaction_function_0(void* instance_args) {
    _lanelet2_map_visualizer_self_t* self = (_lanelet2_map_visualizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lanelet2_map_visualizer_request_t* request = &self->_lf_request;
    #line 25 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf"
        try {
            rclcpp::init(0, NULL);
        } catch (...) { /*  Ignore */ }
    
        rclcpp::NodeOptions nodeOptions = rclcpp::NodeOptions();
    
        // This will lookup for a transform (tf2) over ROS from the ndt_map_publisher
        self->ros2_node = std::make_shared<autoware::lanelet2_map_provider::Lanelet2MapVisualizer>(nodeOptions);
        self->spin_thread = create_spin_thread(self->ros2_node);
    
        auto requestPtr = std::make_shared<autoware_auto_msgs::srv::HADMapService::Request>();
    requestPtr->requested_primitives.push_back(autoware_auto_msgs::srv::HADMapService::Request::FULL_MAP);
    lf_set(request, requestPtr);
#line 28 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_lanelet2_map_visualizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lanelet2_map_visualizerreaction_function_1(void* instance_args) {
    _lanelet2_map_visualizer_self_t* self = (_lanelet2_map_visualizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lanelet2_map_visualizer_map_t* map = self->_lf_map;
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    #line 41 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf"
    lf_print("Got the map.");
    
    std::shared_ptr<lanelet::LaneletMap> sub_map = std::make_shared<lanelet::LaneletMap>();
    autoware::common::had_map_utils::fromBinaryMsg(*map->value, sub_map);
    
    self->ros2_node->visualize_map(sub_map);
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_lanelet2_map_visualizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lanelet2_map_visualizerreaction_function_2(void* instance_args) {
    _lanelet2_map_visualizer_self_t* self = (_lanelet2_map_visualizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 50 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_visualizer/lanelet2_map_provider_visualizer.lf"
    self->spin_thread.join();
#line 52 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_lanelet2_map_visualizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
_lanelet2_map_visualizer_self_t* new__lanelet2_map_visualizer() {
    _lanelet2_map_visualizer_self_t* self = (_lanelet2_map_visualizer_self_t*)lf_new_reactor(sizeof(_lanelet2_map_visualizer_self_t));
    // Set input by default to an always absent default input.
    self->_lf_map = &self->_lf_default__map;
    // Set the default source reactor pointer
    self->_lf_default__map._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _lanelet2_map_visualizerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _lanelet2_map_visualizerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _lanelet2_map_visualizerreaction_function_2;
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
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_2;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__map.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__map.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__map_reactions[0] = &self->_lf__reaction_1;
    self->_lf__map.reactions = &self->_lf__map_reactions[0];
    self->_lf__map.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__map.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__map.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::HADMapBin>);
    return self;
}
