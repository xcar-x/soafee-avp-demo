extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/euclidean_cluster_detector_main/euclidean_cluster_detector.h"
#include "_euclidean_cluster_detector.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _euclidean_cluster_detectorreaction_function_0(void* instance_args) {
    _euclidean_cluster_detector_self_t* self = (_euclidean_cluster_detector_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 21 "/home/avp/soafee/soafee-avp-demo/avp/src/euclidean_cluster_detector/euclidean_cluster_detector_main.lf"
    static std::string yaml_path = get_lfavp_config() + "/param/" + EUCLIDEAN_CLUSTER_DETECTOR_PARAM;
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**"
    );
    self->ros2_node = std::make_shared<autoware::perception::segmentation::euclidean_cluster_nodes::EuclideanClusterNode>(nodeOptions);
#line 22 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_euclidean_cluster_detector.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _euclidean_cluster_detectorreaction_function_1(void* instance_args) {
    _euclidean_cluster_detector_self_t* self = (_euclidean_cluster_detector_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _euclidean_cluster_detector_points_in_t* points_in = self->_lf_points_in;
    int points_in_width = self->_lf_points_in_width; SUPPRESS_UNUSED_WARNING(points_in_width);
    _euclidean_cluster_detector_bounding_boxes_t* bounding_boxes = &self->_lf_bounding_boxes;
    #line 31 "/home/avp/soafee/soafee-avp-demo/avp/src/euclidean_cluster_detector/euclidean_cluster_detector_main.lf"
    self->ros2_node->handle(points_in->value);
    auto msg = std::make_shared<autoware_auto_msgs::msg::BoundingBoxArray>(self->ros2_node->m_boxes);
    lf_set(bounding_boxes, msg);
#line 35 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_euclidean_cluster_detector.cpp"
}
#include "include/api/reaction_macros_undef.h"
_euclidean_cluster_detector_self_t* new__euclidean_cluster_detector() {
    _euclidean_cluster_detector_self_t* self = (_euclidean_cluster_detector_self_t*)lf_new_reactor(sizeof(_euclidean_cluster_detector_self_t));
    // Set input by default to an always absent default input.
    self->_lf_points_in = &self->_lf_default__points_in;
    // Set the default source reactor pointer
    self->_lf_default__points_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _euclidean_cluster_detectorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _euclidean_cluster_detectorreaction_function_1;
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
