extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/lgsvl_interface_main/lgsvl_interface.h"
#include "_lgsvl_interface.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_0(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_ros2_bridge_kinematic_state_t* ros2_bridge_kinematic_state = &self->_lf_ros2_bridge_kinematic_state;
    _lgsvl_interface_ros2_bridge_state_report_t* ros2_bridge_state_report = &self->_lf_ros2_bridge_state_report;
    #line 27 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + LGSVL_INTERFACE_CONFIG;
    
    // Remap topics using command-line arguments
    char *argv[] = {
        "lf_lgsvl_interface",
        "--ros-args",
        "--remap", "vehicle_control_cmd:=/lgsvl/vehicle_control_cmd", 
        "--remap", "vehicle_state_cmd:=/lgsvl/vehicle_state_cmd",
        "--remap", "state_report:=/lgsvl/state_report",
        "--remap", "vehicle_odom:=/lgsvl/vehicle_odom",
        "--remap", "gnss_odom:=/lgsvl/gnss_odom",
        "--", 
        NULL
    };
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**",
        13,
        argv
    );
    
    // Tell the LGSVL interface to publish pose updates on tf topics, which means we need to use a thread to call rclcpp::spin.
    nodeOptions.append_parameter_override("lgsvl.publish_tf", true);
    
    self->ros2_node = std::make_shared<lgsvl_interface::LgsvlInterfaceNode>(
        nodeOptions,
        ros2_bridge_kinematic_state,
        ros2_bridge_state_report,
        &lf_schedule_value
    );
    self->sequence_number = 0;
    self->spin_thread = create_spin_thread(self->ros2_node);
    
    // Use CPP destructors for the ros2 bridge physical actions.
    lf_set_destructor(ros2_bridge_state_report, cpp_delete<autoware_auto_msgs::msg::VehicleStateReport>);
    lf_set_destructor(ros2_bridge_kinematic_state, cpp_delete<autoware_auto_msgs::msg::VehicleKinematicState>);
#line 53 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_1(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _lgsvl_interface_ros2_bridge_kinematic_state_t* ros2_bridge_kinematic_state = &self->_lf_ros2_bridge_kinematic_state;
    // Set the fields of the action struct to match the current trigger.
    ros2_bridge_kinematic_state->is_present = (bool)self->_lf__ros2_bridge_kinematic_state.status;
    ros2_bridge_kinematic_state->has_value = ((self->_lf__ros2_bridge_kinematic_state.tmplt.token) != NULL && (self->_lf__ros2_bridge_kinematic_state.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)ros2_bridge_kinematic_state, (self->_lf__ros2_bridge_kinematic_state.tmplt.token));
    if (ros2_bridge_kinematic_state->has_value) {
        ros2_bridge_kinematic_state->value = (autoware_auto_msgs::msg::VehicleKinematicState*)(self->_lf__ros2_bridge_kinematic_state.tmplt.token)->value;
        ros2_bridge_kinematic_state->length = (self->_lf__ros2_bridge_kinematic_state.tmplt.token)->length;
    }
    lf_critical_section_exit(self->base.environment);
    _lgsvl_interface_vehicle_kinematic_state_t* vehicle_kinematic_state = &self->_lf_vehicle_kinematic_state;
    #line 69 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    // ros2_bridge_kinematic_state->value->sequence_number = self->sequence_number++;
    auto msg = std::make_shared<autoware_auto_msgs::msg::VehicleKinematicState>(*ros2_bridge_kinematic_state->value);
    lf_set(vehicle_kinematic_state, msg);
#line 76 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_2(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _lgsvl_interface_ros2_bridge_state_report_t* ros2_bridge_state_report = &self->_lf_ros2_bridge_state_report;
    // Set the fields of the action struct to match the current trigger.
    ros2_bridge_state_report->is_present = (bool)self->_lf__ros2_bridge_state_report.status;
    ros2_bridge_state_report->has_value = ((self->_lf__ros2_bridge_state_report.tmplt.token) != NULL && (self->_lf__ros2_bridge_state_report.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)ros2_bridge_state_report, (self->_lf__ros2_bridge_state_report.tmplt.token));
    if (ros2_bridge_state_report->has_value) {
        ros2_bridge_state_report->value = (autoware_auto_msgs::msg::VehicleStateReport*)(self->_lf__ros2_bridge_state_report.tmplt.token)->value;
        ros2_bridge_state_report->length = (self->_lf__ros2_bridge_state_report.tmplt.token)->length;
    }
    lf_critical_section_exit(self->base.environment);
    _lgsvl_interface_state_report_t* state_report = &self->_lf_state_report;
    #line 77 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    auto msg = std::make_shared<autoware_auto_msgs::msg::VehicleStateReport>(*ros2_bridge_state_report->value);
    lf_set(state_report, msg);
    
    // Update
    if (self->ros2_node->m_state_machine) {
        self->ros2_node->m_state_machine->update(self->ros2_node->m_interface->get_odometry(), self->ros2_node->m_interface->get_state_report());
        self->ros2_node->state_machine_report();
    }
#line 104 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_3(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_state_command_t* state_command = self->_lf_state_command;
    int state_command_width = self->_lf_state_command_width; SUPPRESS_UNUSED_WARNING(state_command_width);
    #line 90 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    self->ros2_node->m_last_state_command = *state_command->value;
#line 114 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
void _lgsvl_interface_STP_function3(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_state_command_t* state_command = self->_lf_state_command;
    int state_command_width = self->_lf_state_command_width; SUPPRESS_UNUSED_WARNING(state_command_width);
    #line 92 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    instant_t intended_tag = state_command->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `state_command`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
    
    if (lag > MSEC(5)) {
        lf_print_error("STP and deadline violation");
    }
    self->ros2_node->m_last_state_command = *state_command->value;
#line 135 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
void _lgsvl_interface_deadline_function3(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_state_command_t* state_command = self->_lf_state_command;
    int state_command_width = self->_lf_state_command_width; SUPPRESS_UNUSED_WARNING(state_command_width);
    #line 107 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    // Detect output jitter bound violations.
    interval_t lag = lf_time_physical() - lf_time_logical();
    lf_print_error(PRINTF_TIME" ms: Deadline violation on state_command! lag=" PRINTF_TIME" ms", lf_time_physical_elapsed()/MSEC(1), lag/MSEC(1));
    self->ros2_node->m_last_state_command = *state_command->value;
#line 146 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_4(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_vehicle_command_t* vehicle_command = self->_lf_vehicle_command;
    int vehicle_command_width = self->_lf_vehicle_command_width; SUPPRESS_UNUSED_WARNING(vehicle_command_width);
    #line 116 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    try {
        self->ros2_node->on_command_message(*vehicle_command->value);
    } catch (...) {
        self->ros2_node->on_error(std::current_exception());
    }
#line 160 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
void _lgsvl_interface_STP_function4(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_vehicle_command_t* vehicle_command = self->_lf_vehicle_command;
    int vehicle_command_width = self->_lf_vehicle_command_width; SUPPRESS_UNUSED_WARNING(vehicle_command_width);
    #line 122 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    instant_t intended_tag = vehicle_command->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `vehicle_command`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
    if (lag > MSEC(5)) {
        lf_print_error("STP and deadline violation");
    } else {
        try {
            self->ros2_node->on_command_message(*vehicle_command->value);
        } catch (...) {
            self->ros2_node->on_error(std::current_exception());
        }
    }
#line 185 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
void _lgsvl_interface_deadline_function4(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _lgsvl_interface_vehicle_command_t* vehicle_command = self->_lf_vehicle_command;
    int vehicle_command_width = self->_lf_vehicle_command_width; SUPPRESS_UNUSED_WARNING(vehicle_command_width);
    #line 141 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    // Detect output jitter bound violations.
    interval_t lag = lf_time_physical() - lf_time_logical();
    lf_print_error(PRINTF_TIME" ms: Deadline violation on vehicle_command! lag=" PRINTF_TIME" ms", lf_time_physical_elapsed()/MSEC(1), lag/MSEC(1));
    // For now, still give the control output, even if it is late
    try {
        self->ros2_node->on_command_message(*vehicle_command->value);
    } catch (...) {
        self->ros2_node->on_error(std::current_exception());
    }
#line 201 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _lgsvl_interfacereaction_function_5(void* instance_args) {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 153 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    self->spin_thread.join();
#line 210 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.cpp"
}
#include "include/api/reaction_macros_undef.h"
_lgsvl_interface_self_t* new__lgsvl_interface() {
    _lgsvl_interface_self_t* self = (_lgsvl_interface_self_t*)lf_new_reactor(sizeof(_lgsvl_interface_self_t));
    self->_lf_ros2_bridge_kinematic_state._base.trigger = &self->_lf__ros2_bridge_kinematic_state;
    self->_lf_ros2_bridge_kinematic_state.parent = (self_base_t*)self;
    self->_lf_ros2_bridge_kinematic_state.source_id = -1;
    self->_lf_ros2_bridge_state_report._base.trigger = &self->_lf__ros2_bridge_state_report;
    self->_lf_ros2_bridge_state_report.parent = (self_base_t*)self;
    self->_lf_ros2_bridge_state_report.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_state_command = &self->_lf_default__state_command;
    // Set the default source reactor pointer
    self->_lf_default__state_command._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_vehicle_command = &self->_lf_default__vehicle_command;
    // Set the default source reactor pointer
    self->_lf_default__vehicle_command._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _lgsvl_interfacereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _lgsvl_interfacereaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _lgsvl_interfacereaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _lgsvl_interfacereaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = &_lgsvl_interface_deadline_function3;
    self->_lf__reaction_3.STP_handler = &_lgsvl_interface_STP_function3;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    self->_lf__reaction_4.number = 4;
    self->_lf__reaction_4.function = _lgsvl_interfacereaction_function_4;
    self->_lf__reaction_4.self = self;
    self->_lf__reaction_4.deadline_violation_handler = &_lgsvl_interface_deadline_function4;
    self->_lf__reaction_4.STP_handler = &_lgsvl_interface_STP_function4;
    self->_lf__reaction_4.name = "?";
    self->_lf__reaction_4.mode = NULL;
    self->_lf__reaction_5.number = 5;
    self->_lf__reaction_5.function = _lgsvl_interfacereaction_function_5;
    self->_lf__reaction_5.self = self;
    self->_lf__reaction_5.deadline_violation_handler = NULL;
    self->_lf__reaction_5.STP_handler = NULL;
    self->_lf__reaction_5.name = "?";
    self->_lf__reaction_5.mode = NULL;
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
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_5;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__ros2_bridge_kinematic_state.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_kinematic_state.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_kinematic_state_reactions[0] = &self->_lf__reaction_1;
    self->_lf__ros2_bridge_kinematic_state.reactions = &self->_lf__ros2_bridge_kinematic_state_reactions[0];
    self->_lf__ros2_bridge_kinematic_state.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ros2_bridge_kinematic_state.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ros2_bridge_kinematic_state.is_physical = true;
    
    self->_lf__ros2_bridge_kinematic_state.tmplt.type.element_size = sizeof(autoware_auto_msgs::msg::VehicleKinematicState);
    self->_lf_ros2_bridge_kinematic_state.type.element_size = sizeof(autoware_auto_msgs::msg::VehicleKinematicState);
    self->_lf__ros2_bridge_state_report.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_state_report.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ros2_bridge_state_report_reactions[0] = &self->_lf__reaction_2;
    self->_lf__ros2_bridge_state_report.reactions = &self->_lf__ros2_bridge_state_report_reactions[0];
    self->_lf__ros2_bridge_state_report.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ros2_bridge_state_report.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ros2_bridge_state_report.is_physical = true;
    
    self->_lf__ros2_bridge_state_report.tmplt.type.element_size = sizeof(autoware_auto_msgs::msg::VehicleStateReport);
    self->_lf_ros2_bridge_state_report.type.element_size = sizeof(autoware_auto_msgs::msg::VehicleStateReport);
    self->_lf__state_command.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__state_command.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__state_command_reactions[0] = &self->_lf__reaction_3;
    self->_lf__state_command.reactions = &self->_lf__state_command_reactions[0];
    self->_lf__state_command.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__state_command.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__state_command.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleStateCommand>);
    self->_lf__vehicle_command.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__vehicle_command.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__vehicle_command_reactions[0] = &self->_lf__reaction_4;
    self->_lf__vehicle_command.reactions = &self->_lf__vehicle_command_reactions[0];
    self->_lf__vehicle_command.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__vehicle_command.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__vehicle_command.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleControlCommand>);
    return self;
}
