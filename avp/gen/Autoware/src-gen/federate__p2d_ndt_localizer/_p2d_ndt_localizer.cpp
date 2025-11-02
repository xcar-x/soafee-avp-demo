extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/p2d_ndt_localizer_main/p2d_ndt_localizer.h"
#include "_p2d_ndt_localizer.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _p2d_ndt_localizerreaction_function_0(void* instance_args) {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 23 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + NDT_LOCALIZER_PARAM;
    
    rclcpp::NodeOptions node_options = get_node_options_from_yaml(
        yaml_path.c_str(),
        "/**"
    );
    
    // This constructor copies pose_initializer and stores it internally. Thus,
    // pose_initializer does not need to be a state.
    self->ros2_node = std::make_shared<autoware::localization::ndt_nodes::P2DNDTLocalizerNode>(
    	"lfros2_ndt_localizer", node_options, autoware::localization::ndt_nodes::PoseInitializer_{}
        );
    self->spin_thread = create_spin_thread(self->ros2_node);
#line 28 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _p2d_ndt_localizerreaction_function_1(void* instance_args) {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _p2d_ndt_localizer_ndt_map_points_in_t* ndt_map_points_in = self->_lf_ndt_map_points_in;
    int ndt_map_points_in_width = self->_lf_ndt_map_points_in_width; SUPPRESS_UNUSED_WARNING(ndt_map_points_in_width);
    #line 39 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    // Converts the point in value to shared pointer
    self->ros2_node->map_callback(ndt_map_points_in->value);
    // Callback definitions:
    // void map_callback(typename MapMsgT::ConstSharedPtr msg_ptr)
    // void observation_callback(typename ObservationMsgT::ConstSharedPtr msg_ptr)
    // Both MapMsgT and ObservationMsgT are given as PointCloud2 in the templated class definition of
    // RelativeLocalizerNode in localization_node.hpp.
#line 44 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _p2d_ndt_localizerreaction_function_2(void* instance_args) {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _p2d_ndt_localizer_fused_downsampled_points_in_t* fused_downsampled_points_in = self->_lf_fused_downsampled_points_in;
    int fused_downsampled_points_in_width = self->_lf_fused_downsampled_points_in_width; SUPPRESS_UNUSED_WARNING(fused_downsampled_points_in_width);
    _p2d_ndt_localizer_fused_downsampled_points_process_t* fused_downsampled_points_process = &self->_lf_fused_downsampled_points_process;
    #line 49 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    lf_schedule_value(fused_downsampled_points_process, 0, new std::shared_ptr<sensor_msgs::msg::PointCloud2>(fused_downsampled_points_in->value), 1);
#line 55 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _p2d_ndt_localizerreaction_function_3(void* instance_args) {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _p2d_ndt_localizer_fused_downsampled_points_process_t* fused_downsampled_points_process = &self->_lf_fused_downsampled_points_process;
    // Set the fields of the action struct to match the current trigger.
    fused_downsampled_points_process->is_present = (bool)self->_lf__fused_downsampled_points_process.status;
    fused_downsampled_points_process->has_value = ((self->_lf__fused_downsampled_points_process.tmplt.token) != NULL && (self->_lf__fused_downsampled_points_process.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)fused_downsampled_points_process, (self->_lf__fused_downsampled_points_process.tmplt.token));
    if (fused_downsampled_points_process->has_value) {
        fused_downsampled_points_process->value = *(std::shared_ptr<sensor_msgs::msg::PointCloud2>*)(self->_lf__fused_downsampled_points_process.tmplt.token)->value;
    }
    lf_critical_section_exit(self->base.environment);
    #line 53 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    self->ros2_node->observation_callback(fused_downsampled_points_process->value);
#line 74 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _p2d_ndt_localizerreaction_function_4(void* instance_args) {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 57 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    self->spin_thread.join();
#line 83 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.cpp"
}
#include "include/api/reaction_macros_undef.h"
_p2d_ndt_localizer_self_t* new__p2d_ndt_localizer() {
    _p2d_ndt_localizer_self_t* self = (_p2d_ndt_localizer_self_t*)lf_new_reactor(sizeof(_p2d_ndt_localizer_self_t));
    self->_lf_fused_downsampled_points_process._base.trigger = &self->_lf__fused_downsampled_points_process;
    self->_lf_fused_downsampled_points_process.parent = (self_base_t*)self;
    self->_lf_fused_downsampled_points_process.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_ndt_map_points_in = &self->_lf_default__ndt_map_points_in;
    // Set the default source reactor pointer
    self->_lf_default__ndt_map_points_in._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_fused_downsampled_points_in = &self->_lf_default__fused_downsampled_points_in;
    // Set the default source reactor pointer
    self->_lf_default__fused_downsampled_points_in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _p2d_ndt_localizerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _p2d_ndt_localizerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _p2d_ndt_localizerreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _p2d_ndt_localizerreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _p2d_ndt_localizerreaction_function_4;
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
    self->_lf__fused_downsampled_points_process.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__fused_downsampled_points_process.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__fused_downsampled_points_process_reactions[0] = &self->_lf__reaction_3;
    self->_lf__fused_downsampled_points_process.reactions = &self->_lf__fused_downsampled_points_process_reactions[0];
    self->_lf__fused_downsampled_points_process.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__fused_downsampled_points_process.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__fused_downsampled_points_process.is_physical = false;
    self->_lf__fused_downsampled_points_process.policy = replace;
    self->_lf__fused_downsampled_points_process.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    self->_lf_fused_downsampled_points_process.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    self->_lf__ndt_map_points_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ndt_map_points_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ndt_map_points_in_reactions[0] = &self->_lf__reaction_1;
    self->_lf__ndt_map_points_in.reactions = &self->_lf__ndt_map_points_in_reactions[0];
    self->_lf__ndt_map_points_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ndt_map_points_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ndt_map_points_in.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    self->_lf__fused_downsampled_points_in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__fused_downsampled_points_in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__fused_downsampled_points_in_reactions[0] = &self->_lf__reaction_2;
    self->_lf__fused_downsampled_points_in.reactions = &self->_lf__fused_downsampled_points_in_reactions[0];
    self->_lf__fused_downsampled_points_in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__fused_downsampled_points_in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__fused_downsampled_points_in.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    return self;
}
