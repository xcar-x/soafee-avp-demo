extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/voxel_grid_downsampler_main/voxel_grid_downsampler.h"
#include "_voxel_grid_downsampler.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _voxel_grid_downsamplerreaction_function_0(void* instance_args) {
    _voxel_grid_downsampler_self_t* self = (_voxel_grid_downsampler_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/voxel_grid_downsampler/voxel_grid_downsampler_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + SCAN_DOWNSAMPLER_MS3_CONFIG;
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**"
    );
    
    self->ros2_node = std::make_shared<autoware::perception::filters::voxel_grid_nodes::VoxelCloudNode>(nodeOptions);
#line 23 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_voxel_grid_downsampler.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _voxel_grid_downsamplerreaction_function_1(void* instance_args) {
    _voxel_grid_downsampler_self_t* self = (_voxel_grid_downsampler_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _voxel_grid_downsampler_points_in_t* points_in = self->_lf_points_in;
    int points_in_width = self->_lf_points_in_width; SUPPRESS_UNUSED_WARNING(points_in_width);
    _voxel_grid_downsampler_downsample_t* downsample = &self->_lf_downsample;
    #line 33 "/home/avp/soafee/soafee-avp-demo/avp/src/voxel_grid_downsampler/voxel_grid_downsampler_main.lf"
    lf_schedule_value(downsample, 0, new std::shared_ptr<sensor_msgs::msg::PointCloud2>(points_in->value), 1);
#line 34 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_voxel_grid_downsampler.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _voxel_grid_downsamplerreaction_function_2(void* instance_args) {
    _voxel_grid_downsampler_self_t* self = (_voxel_grid_downsampler_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _voxel_grid_downsampler_downsample_t* downsample = &self->_lf_downsample;
    // Set the fields of the action struct to match the current trigger.
    downsample->is_present = (bool)self->_lf__downsample.status;
    downsample->has_value = ((self->_lf__downsample.tmplt.token) != NULL && (self->_lf__downsample.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)downsample, (self->_lf__downsample.tmplt.token));
    if (downsample->has_value) {
        downsample->value = *(std::shared_ptr<sensor_msgs::msg::PointCloud2>*)(self->_lf__downsample.tmplt.token)->value;
    }
    lf_critical_section_exit(self->base.environment);
    _voxel_grid_downsampler_points_out_t* points_out = &self->_lf_points_out;
    #line 37 "/home/avp/soafee/soafee-avp-demo/avp/src/voxel_grid_downsampler/voxel_grid_downsampler_main.lf"
    self->ros2_node->callback(downsample->value);
    auto msg = std::make_shared<sensor_msgs::msg::PointCloud2>(self->ros2_node->m_voxelgrid_ptr->get());
    lf_set(points_out, msg);
#line 56 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_voxel_grid_downsampler.cpp"
}
#include "include/api/reaction_macros_undef.h"
_voxel_grid_downsampler_self_t* new__voxel_grid_downsampler() {
    _voxel_grid_downsampler_self_t* self = (_voxel_grid_downsampler_self_t*)lf_new_reactor(sizeof(_voxel_grid_downsampler_self_t));
    self->_lf_downsample._base.trigger = &self->_lf__downsample;
    self->_lf_downsample.parent = (self_base_t*)self;
    self->_lf_downsample.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_points_in = &self->_lf_default__points_in;
    // Set the default source reactor pointer
    self->_lf_default__points_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _voxel_grid_downsamplerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _voxel_grid_downsamplerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _voxel_grid_downsamplerreaction_function_2;
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
    self->_lf__downsample.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__downsample.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__downsample_reactions[0] = &self->_lf__reaction_2;
    self->_lf__downsample.reactions = &self->_lf__downsample_reactions[0];
    self->_lf__downsample.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__downsample.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__downsample.is_physical = false;
    self->_lf__downsample.policy = replace;
    self->_lf__downsample.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    self->_lf_downsample.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
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
