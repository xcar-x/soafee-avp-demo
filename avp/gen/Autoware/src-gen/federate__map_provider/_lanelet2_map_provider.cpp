extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/lanelet2_map_provider_main/lanelet2_map_provider.h"
#include "_lanelet2_map_provider.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _lanelet2_map_providerreaction_function_0(void* instance_args) {
    _lanelet2_map_provider_self_t* self = (_lanelet2_map_provider_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 20 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_provider/lanelet2_map_provider_main.lf"
    static std::string yaml_path = get_lfavp_config() + "/param/" + LANELET2_MAP_PROVIDER_PARAM;
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**"
    );
    
    // This will lookup for a transform (tf2) over ROS from the ndt_map_publisher
    self->ros2_node = new autoware::lanelet2_map_provider::Lanelet2MapProviderNode(nodeOptions);
#line 24 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_lanelet2_map_provider.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lanelet2_map_providerreaction_function_1(void* instance_args) {
    _lanelet2_map_provider_self_t* self = (_lanelet2_map_provider_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lanelet2_map_provider_request_t** request = self->_lf_request;
    int request_width = self->_lf_request_width; SUPPRESS_UNUSED_WARNING(request_width);
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    _lanelet2_map_provider_map_t** map = self->_lf_map_pointers;
    #line 32 "/home/avp/soafee/soafee-avp-demo/avp/src/lanelet2_map_provider/lanelet2_map_provider_main.lf"
    for (int i = 0; i < request_width; i++) {
        if (request[i]->is_present) {
            auto response = std::make_shared<autoware_auto_msgs::srv::HADMapService_Response>();
            self->ros2_node->handle_request(request[i]->value, response);
            auto msg = std::make_shared<autoware_auto_msgs::msg::HADMapBin>(response->map);
            lf_set(map[i], std::move(msg));
        }
    }
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_lanelet2_map_provider.cpp"
}
#include "include/api/reaction_macros_undef.h"
_lanelet2_map_provider_self_t* new__lanelet2_map_provider() {
    _lanelet2_map_provider_self_t* self = (_lanelet2_map_provider_self_t*)lf_new_reactor(sizeof(_lanelet2_map_provider_self_t));
    // Set the default source reactor pointer
    self->_lf_default__request._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _lanelet2_map_providerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _lanelet2_map_providerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__request.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__request.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__request_reactions[0] = &self->_lf__reaction_1;
    self->_lf__request.reactions = &self->_lf__request_reactions[0];
    self->_lf__request.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__request.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__request.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    return self;
}
