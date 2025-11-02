extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/ndt_map_publisher_main/ndt_map_publisher.h"
#include "_ndt_map_publisher.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _ndt_map_publisherreaction_function_0(void* instance_args) {
    _ndt_map_publisher_self_t* self = (_ndt_map_publisher_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _ndt_map_publisher_points_out_t* points_out = &self->_lf_points_out;
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/ndt_map_publisher/ndt_map_publisher_main.lf"
    static std::string yaml_path = get_lfavp_config() + "/param/" + NDT_MAP_PUBLISHER_PARAM;
    
    rclcpp::NodeOptions node_options = get_node_options_from_yaml(
        yaml_path.c_str(),
        "/**"
    );
    self->ros2_node = std::make_shared<autoware::localization::ndt_nodes::NDTMapPublisherNode>(node_options);
    self->spin_thread = create_spin_thread(self->ros2_node);
    
    auto msg = std::make_shared<sensor_msgs::msg::PointCloud2>(self->ros2_node->m_map_pc);
    lf_set(points_out, msg);
#line 26 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ndt_map_publisher/_ndt_map_publisher.cpp"
}
#include "include/api/reaction_macros_undef.h"
_ndt_map_publisher_self_t* new__ndt_map_publisher() {
    _ndt_map_publisher_self_t* self = (_ndt_map_publisher_self_t*)lf_new_reactor(sizeof(_ndt_map_publisher_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _ndt_map_publisherreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
