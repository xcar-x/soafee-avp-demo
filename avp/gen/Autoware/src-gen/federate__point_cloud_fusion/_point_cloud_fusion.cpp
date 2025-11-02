extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/point_cloud_fusion_main/point_cloud_fusion.h"
#include "_point_cloud_fusion.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _point_cloud_fusionreaction_function_0(void* instance_args) {
    _point_cloud_fusion_self_t* self = (_point_cloud_fusion_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + VLP16_SIM_LEXUS_PC_FUSION_CONFIG;
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**"
    );
    
    self->ros2_node = new autoware::perception::filters::point_cloud_fusion_nodes::PointCloudFusionNode(nodeOptions);
#line 23 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_point_cloud_fusion.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _point_cloud_fusionreaction_function_1(void* instance_args) {
    _point_cloud_fusion_self_t* self = (_point_cloud_fusion_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _point_cloud_fusion_points_in_t** points_in = self->_lf_points_in;
    int points_in_width = self->_lf_points_in_width; SUPPRESS_UNUSED_WARNING(points_in_width);
    _point_cloud_fusion_points_out_t* points_out = &self->_lf_points_out;
    #line 35 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    // Make sure point clouds are not null
    if (points_in[0]->is_present)
    {
        self->point_in_0_seen = true;
    }
    if (points_in[1]->is_present)
    {
        self->point_in_1_seen = true;
    }
    
    if (!(self->point_in_0_seen) || !(self->point_in_1_seen)) {
        return;
    }
    
    self->point_in_0_seen = false;
    self->point_in_1_seen = false;
    
    // lf_print("Calling pointcloud_callback %d %d.", points_in[0]->value->width, points_in[1]->value->width);
    self->ros2_node->pointcloud_callback(
        points_in[0]->value,
        points_in[1]->value,
        std::make_shared<const sensor_msgs::msg::PointCloud2>(),
        std::make_shared<const sensor_msgs::msg::PointCloud2>(),
        std::make_shared<const sensor_msgs::msg::PointCloud2>(),
        std::make_shared<const sensor_msgs::msg::PointCloud2>(),
        std::make_shared<const sensor_msgs::msg::PointCloud2>(),
        std::make_shared<const sensor_msgs::msg::PointCloud2>()
     );
    auto msg = std::make_shared<sensor_msgs::msg::PointCloud2>(self->ros2_node->m_cloud_concatenated);
    lf_set(points_out, msg);
#line 63 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_point_cloud_fusion.cpp"
}
#include "include/api/reaction_macros_undef.h"
_point_cloud_fusion_self_t* new__point_cloud_fusion() {
    _point_cloud_fusion_self_t* self = (_point_cloud_fusion_self_t*)lf_new_reactor(sizeof(_point_cloud_fusion_self_t));
    // Set the default source reactor pointer
    self->_lf_default__points_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _point_cloud_fusionreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _point_cloud_fusionreaction_function_1;
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
