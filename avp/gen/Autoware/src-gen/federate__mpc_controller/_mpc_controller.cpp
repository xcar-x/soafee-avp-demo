extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/mpc_controller_main/mpc_controller.h"
#include "_mpc_controller.h"
// ***** Start of method declarations.
void _mpc_controller_method_runSafetyIsland(void* instance_args);
#define runSafetyIsland() _mpc_controller_method_runSafetyIsland(self)
#line 34 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
// Implementation of method runSafetyIsland()
void _mpc_controller_method_runSafetyIsland(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    #line 35 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    self->input_ws_t.accel = self->ros2_node->cmd.long_accel_mps2;
    self->input_ws_t.steer = self->ros2_node->cmd.front_wheel_angle_rad;
    self->input_ws_t.ready = true;
    
    printf("Sending %f %f\n", self->input_ws_t.accel, self->input_ws_t.steer);
    self->output_ws_t.ready = false;
    while (self->output_ws_t.ready == false) {
        lf_sleep(USEC(1));
    }
    self->output_ws_t.ready = false; 
    printf("Received %f %f\n",  self->output_ws_t.accel , self->output_ws_t.steer);
    
    self->ros2_node->cmd.front_wheel_angle_rad = self->output_ws_t.steer;
    self->ros2_node->cmd.long_accel_mps2 = self->output_ws_t.accel;
}
#line 31 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
#undef runSafetyIsland
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
#define runSafetyIsland() _mpc_controller_method_runSafetyIsland(self)
void _mpc_controllerreaction_function_0(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _mpc_controller_ros_spin_t* ros_spin = &self->_lf_ros_spin;
    #line 52 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + MPC_CONTROLLER_PARAM;
    
    rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
        yaml_path.c_str(), 
        "/**"
    );
    
    self->ros2_node = std::make_shared<motion::control::mpc_controller_nodes::MpcControllerNode>(
        "mpc_controller", 
        "",
        nodeOptions
    );
    self->sequence_number = 0;
    
    if(self->use_safety_island) {
        pthread_t ws_thread;
        self->args.input = &self->input_ws_t;
        self->args.output = &self->output_ws_t;
        pthread_create(&ws_thread, NULL, &start, &self->args);
    }
    
    lf_schedule(ros_spin, MSEC(0));
#line 62 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
}
#undef runSafetyIsland
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
#define runSafetyIsland() _mpc_controller_method_runSafetyIsland(self)
void _mpc_controllerreaction_function_1(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _mpc_controller_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _mpc_controller_trajectory_t* trajectory = self->_lf_trajectory;
    int trajectory_width = self->_lf_trajectory_width; SUPPRESS_UNUSED_WARNING(trajectory_width);
    _mpc_controller_command_t* command = &self->_lf_command;
    #line 81 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    if (vehicle_kinematic_state->is_present && trajectory->is_present) {
        // We got both simultanous events. 
        self->ros2_node->on_trajectory(trajectory->value);
        self->ros2_node->on_state(vehicle_kinematic_state->value);
    } else if (vehicle_kinematic_state->is_present && trajectory->value != NULL) {
        // Trajectory is late, but we can use trajectory from last iteration.
        self->ros2_node->on_state(vehicle_kinematic_state->value);
    } else if (vehicle_kinematic_state->is_present && trajectory->value == NULL) {
        // We have not yet seen the first trajectory. Skip
    } else if (!vehicle_kinematic_state->is_present){
        // We got a trajectory and not a kinematic state. This is unlikely.
        // Lets reuse the old kinematic state then.
        self->ros2_node->on_trajectory(trajectory->value);
    }
    
    if (self->ros2_node->cmd_is_set) {
        if(self->use_safety_island) {
            runSafetyIsland();
        }
        auto msg = std::make_shared<autoware_auto_msgs::msg::VehicleControlCommand>(self->ros2_node->cmd);
        lf_set(command, msg);
        self->ros2_node->cmd_is_set = false;
    }
#line 99 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
}
void _mpc_controller_STP_function1(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _mpc_controller_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _mpc_controller_trajectory_t* trajectory = self->_lf_trajectory;
    int trajectory_width = self->_lf_trajectory_width; SUPPRESS_UNUSED_WARNING(trajectory_width);
    _mpc_controller_command_t* command = &self->_lf_command;
    #line 105 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    // An STP violation would mean that we have already run the mpc with stale input. Then we
    // dont do anything. The value will be latched in the input port in case it is late
    // the next round also.
    instant_t intended_tag = trajectory->is_present ? trajectory->intended_tag.time : vehicle_kinematic_state->intended_tag.time;
    interval_t lag = lf_time_physical() - intended_tag;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `trajectory/kinematic_state`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        intended_tag,
        lf_time_logical(),
        lf_time_logical() - intended_tag,
        lag
    );
    lf_print_warning("trajectory=%d kinematic_state=%d",trajectory->is_present, vehicle_kinematic_state->is_present);
#line 122 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
}
void _mpc_controller_deadline_function1(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _mpc_controller_vehicle_kinematic_state_t* vehicle_kinematic_state = self->_lf_vehicle_kinematic_state;
    int vehicle_kinematic_state_width = self->_lf_vehicle_kinematic_state_width; SUPPRESS_UNUSED_WARNING(vehicle_kinematic_state_width);
    _mpc_controller_trajectory_t* trajectory = self->_lf_trajectory;
    int trajectory_width = self->_lf_trajectory_width; SUPPRESS_UNUSED_WARNING(trajectory_width);
    _mpc_controller_command_t* command = &self->_lf_command;
    #line 119 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    // When the MPC controller receives a new trajectory it might spend a long time recomputing.
    // This might lead to many events buffered on the event queue. Adding this deadline makes 
    // sure that we discard events that are more than 10msec old.
    lf_print_warning(PRINTF_TIME ": Deadline violation. Dropping incoming vehicle_kinematic_state/trajectories", lf_time_physical_elapsed());
#line 136 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
}
#undef runSafetyIsland
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
#define runSafetyIsland() _mpc_controller_method_runSafetyIsland(self)
void _mpc_controllerreaction_function_2(void* instance_args) {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _mpc_controller_ros_spin_t* ros_spin = &self->_lf_ros_spin;
    // Set the fields of the action struct to match the current trigger.
    ros_spin->is_present = (bool)self->_lf__ros_spin.status;
    ros_spin->has_value = ((self->_lf__ros_spin.tmplt.token) != NULL && (self->_lf__ros_spin.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)ros_spin, (self->_lf__ros_spin.tmplt.token));
    lf_critical_section_exit(self->base.environment);
    #line 130 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    rclcpp::spin_some(self->ros2_node);
    lf_schedule(ros_spin, 0);
#line 155 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.cpp"
}
#undef runSafetyIsland
#include "include/api/reaction_macros_undef.h"
_mpc_controller_self_t* new__mpc_controller() {
    _mpc_controller_self_t* self = (_mpc_controller_self_t*)lf_new_reactor(sizeof(_mpc_controller_self_t));
    self->_lf_ros_spin._base.trigger = &self->_lf__ros_spin;
    self->_lf_ros_spin.parent = (self_base_t*)self;
    self->_lf_ros_spin.source_id = -1;
    // Set input by default to an always absent default input.
    self->_lf_trajectory = &self->_lf_default__trajectory;
    // Set the default source reactor pointer
    self->_lf_default__trajectory._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_vehicle_kinematic_state = &self->_lf_default__vehicle_kinematic_state;
    // Set the default source reactor pointer
    self->_lf_default__vehicle_kinematic_state._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _mpc_controllerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _mpc_controllerreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = &_mpc_controller_deadline_function1;
    self->_lf__reaction_1.STP_handler = &_mpc_controller_STP_function1;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _mpc_controllerreaction_function_2;
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
    self->_lf__ros_spin.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__ros_spin.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__ros_spin_reactions[0] = &self->_lf__reaction_2;
    self->_lf__ros_spin.reactions = &self->_lf__ros_spin_reactions[0];
    self->_lf__ros_spin.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__ros_spin.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__ros_spin.is_physical = true;
    
    self->_lf__ros_spin.tmplt.type.element_size = 0;
    self->_lf_ros_spin.type.element_size = 0;
    self->_lf__trajectory.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__trajectory.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__trajectory_reactions[0] = &self->_lf__reaction_1;
    self->_lf__trajectory.reactions = &self->_lf__trajectory_reactions[0];
    self->_lf__trajectory.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__trajectory.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__trajectory.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Trajectory>);
    self->_lf__vehicle_kinematic_state.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__vehicle_kinematic_state_reactions[0] = &self->_lf__reaction_1;
    self->_lf__vehicle_kinematic_state.reactions = &self->_lf__vehicle_kinematic_state_reactions[0];
    self->_lf__vehicle_kinematic_state.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__vehicle_kinematic_state.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__vehicle_kinematic_state.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState>);
    return self;
}
