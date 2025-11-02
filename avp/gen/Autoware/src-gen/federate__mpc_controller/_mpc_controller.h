#ifndef _MPC_CONTROLLER_H
#define _MPC_CONTROLLER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_650405881_H
#define TOP_LEVEL_PREAMBLE_650405881_H
#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _mpc_controller_trajectory_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleKinematicState> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _mpc_controller_vehicle_kinematic_state_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleControlCommand> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _mpc_controller_command_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;

    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _mpc_controller_ros_spin_t;
typedef struct {
    struct self_base_t base;
    #line 16 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    interval_t STP_offset;
    #line 16 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    bool use_safety_island;
#line 80 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.h"
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    uint32_t sequence_number;
    #line 23 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    std::shared_ptr<motion::control::mpc_controller_nodes::MpcControllerNode> ros2_node;
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    std::thread spin_thread;
    #line 25 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    ws_msg_t input_ws_t;
    #line 26 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    ws_msg_t output_ws_t;
    #line 27 "/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf"
    ws_args_t args;
#line 93 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_mpc_controller.h"
    _mpc_controller_ros_spin_t _lf_ros_spin;
    _mpc_controller_trajectory_t* _lf_trajectory;
    // width of -2 indicates that it is not a multiport.
    int _lf_trajectory_width;
    // Default input (in case it does not get connected)
    _mpc_controller_trajectory_t _lf_default__trajectory;
    _mpc_controller_vehicle_kinematic_state_t* _lf_vehicle_kinematic_state;
    // width of -2 indicates that it is not a multiport.
    int _lf_vehicle_kinematic_state_width;
    // Default input (in case it does not get connected)
    _mpc_controller_vehicle_kinematic_state_t _lf_default__vehicle_kinematic_state;
    _mpc_controller_command_t _lf_command;
    int _lf_command_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__ros_spin;
    reaction_t* _lf__ros_spin_reactions[1];
    trigger_t _lf__trajectory;
    reaction_t* _lf__trajectory_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__vehicle_kinematic_state;
    reaction_t* _lf__vehicle_kinematic_state_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _mpc_controller_self_t;
_mpc_controller_self_t* new__mpc_controller();
#endif // _MPC_CONTROLLER_H
