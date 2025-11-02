#ifndef _mpc_controller_H
#define _mpc_controller_H
#ifndef _MPC_CONTROLLER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_650405881_H
#define TOP_LEVEL_PREAMBLE_650405881_H
/*Correspondence: Range: [(6, 4), (10, 40)) -> Range: [(0, 0), (4, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/mpc_controller/mpc_controller_main.lf)*/#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct mpc_controller_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t STP_offset;
    bool use_safety_island;
    uint32_t sequence_number;
    std::shared_ptr<motion::control::mpc_controller_nodes::MpcControllerNode> ros2_node;
    std::thread spin_thread;
    ws_msg_t input_ws_t;
    ws_msg_t output_ws_t;
    ws_args_t args;
    int end[0]; // placeholder; MSVC does not compile empty structs
} mpc_controller_self_t;
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
} mpc_controller_trajectory_t;
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
} mpc_controller_vehicle_kinematic_state_t;
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
} mpc_controller_command_t;
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
} mpc_controller_ros_spin_t;
#endif
#endif
