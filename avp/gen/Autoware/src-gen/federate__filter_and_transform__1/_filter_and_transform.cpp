extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/filter_and_transform_main/filter_and_transform.h"
#include "_filter_and_transform.h"
// *********** From the preamble, verbatim:
#line 38 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
#include "tag/api/tag.h"

trigger_handle_t ft_schedule_value(void* action, interval_t extra_delay, void* value, int length)
{
    return lf_schedule_value(action, extra_delay, value, length);
}
#line 16 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__1/_filter_and_transform.cpp"

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _filter_and_transformreaction_function_0(void* instance_args) {
    _filter_and_transform_self_t* self = (_filter_and_transform_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _filter_and_transform_ros2_bridge_t* ros2_bridge = &self->_lf_ros2_bridge;
    #line 47 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    static std::string yaml_path = get_lfavp_config() + "/param/" + PC_FILTER_TRANSFORM_PARAM;
    
    char program_name[200], topic_cmd[200];
    sprintf(program_name, "lf_filter_and_transform_%d", self->bank_index);
    sprintf(topic_cmd, "points_in:=%s", self->lidar_topic_names[self->bank_index]);
    char *argv[] = {program_name, "--ros-args", "--remap", topic_cmd, "--", NULL};
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(),
        self->config_namespaces[self->bank_index],
        5,
        argv
    );
    self->ros2_node = std::make_shared<autoware::perception::filters::point_cloud_filter_transform_nodes::PointCloud2FilterTransformNode>(
        nodeOptions,
        ros2_bridge,
        &ft_schedule_value
    );
    self->spin_thread = create_spin_thread(self->ros2_node);
    lf_set_destructor(ros2_bridge, cpp_delete<sensor_msgs::msg::PointCloud2>);
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__1/_filter_and_transform.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _filter_and_transformreaction_function_1(void* instance_args) {
    _filter_and_transform_self_t* self = (_filter_and_transform_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _filter_and_transform_ros2_bridge_t* ros2_bridge = &self->_lf_ros2_bridge;
    // Set the fields of the action struct to match the current trigger.
    ros2_bridge->is_present = (bool)self->_lf__ros2_bridge.status;
    ros2_bridge->has_value = ((self->_lf__ros2_bridge.tmplt.token) != NULL && (self->_lf__ros2_bridge.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)ros2_bridge, (self->_lf__ros2_bridge.tmplt.token));
    if (ros2_bridge->has_value) {
        ros2_bridge->value = (sensor_msgs::msg::PointCloud2*)(self->_lf__ros2_bridge.tmplt.token)->value;
        ros2_bridge->length = (self->_lf__ros2_bridge.tmplt.token)->length;
    }
    lf_critical_section_exit(self->base.environment);
    _filter_and_transform_points_out_t* points_out = &self->_lf_points_out;
    #line 69 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    // Process some events
    auto msg = std::make_shared<sensor_msgs::msg::PointCloud2>(*ros2_bridge->value);
    lf_set(points_out, msg);
#line 68 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__1/_filter_and_transform.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _filter_and_transformreaction_function_2(void* instance_args) {
    _filter_and_transform_self_t* self = (_filter_and_transform_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 75 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    self->spin_thread.join();
#line 77 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__1/_filter_and_transform.cpp"
}
#include "include/api/reaction_macros_undef.h"
_filter_and_transform_self_t* new__filter_and_transform() {
    _filter_and_transform_self_t* self = (_filter_and_transform_self_t*)lf_new_reactor(sizeof(_filter_and_transform_self_t));
    self->_lf_ros2_bridge._base.trigger = &self->_lf__ros2_bridge;
    self->_lf_ros2_bridge.parent = (self_base_t*)self;
    self->_lf_ros2_bridge.source_id = -1;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _filter_and_transformreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _filter_and_transformreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _filter_and_transformreaction_function_2;
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
    self->_lf__ros2_bridge.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_reactions[0] = &self->_lf__reaction_1;
    self->_lf__ros2_bridge.reactions = &self->_lf__ros2_bridge_reactions[0];
    self->_lf__ros2_bridge.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ros2_bridge.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ros2_bridge.is_physical = true;
    self->_lf__ros2_bridge.policy = replace;
    self->_lf__ros2_bridge.tmplt.type.element_size = sizeof(sensor_msgs::msg::PointCloud2);
    self->_lf_ros2_bridge.type.element_size = sizeof(sensor_msgs::msg::PointCloud2);
    return self;
}
