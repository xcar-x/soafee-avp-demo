extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/ray_ground_classifier_main/ray_ground_classifier.h"
#include "_ray_ground_classifier.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _ray_ground_classifierreaction_function_0(void* instance_args) {
    _ray_ground_classifier_self_t* self = (_ray_ground_classifier_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/ray_ground_classifier/ray_ground_classifier_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + RAY_GROUND_CLASSIFIER_CONFIG;
    
    char *argv[] = {
        "ray_ground_classifier_cloud_node",
        "--ros-args",
        "--remap", "points_in:=/lidars/points_fused",
        "--", 
        NULL
    };
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**",
        5,
        argv
    );
    lf_print("Loaded node options");
    
    self->ros2_node = std::make_shared<autoware::perception::filters::ray_ground_classifier_nodes::RayGroundClassifierCloudNode>(nodeOptions);
    
    lf_print("Initialized node. PCL Size = %lu", self->ros2_node->m_pcl_size);
    lf_print("Initialized node. Width = %d", self->ros2_node->m_nonground_msg.width);
    lf_print("Initialized node. Frame id = %s", self->ros2_node->m_nonground_msg.header.frame_id.c_str());
#line 38 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_ray_ground_classifier.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _ray_ground_classifierreaction_function_1(void* instance_args) {
    _ray_ground_classifier_self_t* self = (_ray_ground_classifier_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _ray_ground_classifier_points_in_t* points_in = self->_lf_points_in;
    int points_in_width = self->_lf_points_in_width; SUPPRESS_UNUSED_WARNING(points_in_width);
    _ray_ground_classifier_points_non_ground_t* points_non_ground = &self->_lf_points_non_ground;
    #line 48 "/home/avp/soafee/soafee-avp-demo/avp/src/ray_ground_classifier/ray_ground_classifier_main.lf"
    self->ros2_node->callback(points_in->value);    
    
    if (self->ros2_node->m_has_failed) {
        lf_print_warning("Ground classification failed.");
        return;
    }
    auto msg = std::make_shared<sensor_msgs::msg::PointCloud2>(self->ros2_node->m_nonground_msg);
    lf_set(points_non_ground, msg);
#line 56 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_ray_ground_classifier.cpp"
}
#include "include/api/reaction_macros_undef.h"
_ray_ground_classifier_self_t* new__ray_ground_classifier() {
    _ray_ground_classifier_self_t* self = (_ray_ground_classifier_self_t*)lf_new_reactor(sizeof(_ray_ground_classifier_self_t));
    // Set input by default to an always absent default input.
    self->_lf_points_in = &self->_lf_default__points_in;
    // Set the default source reactor pointer
    self->_lf_default__points_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _ray_ground_classifierreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _ray_ground_classifierreaction_function_1;
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
    self->_lf__points_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__points_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__points_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__points_in.reactions = &self->_lf__points_in_reactions[0];
    self->_lf__points_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__points_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__points_in.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    return self;
}
