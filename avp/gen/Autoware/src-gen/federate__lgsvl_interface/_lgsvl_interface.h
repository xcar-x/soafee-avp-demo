#ifndef _LGSVL_INTERFACE_H
#define _LGSVL_INTERFACE_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_380620097_H
#define TOP_LEVEL_PREAMBLE_380620097_H
#include "lgsvl_interface/lgsvl_interface_node.hpp"
#include "lgsvl_interface/lgsvl_interface.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleStateCommand> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lgsvl_interface_state_command_t;
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
} _lgsvl_interface_vehicle_command_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::VehicleStateReport> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lgsvl_interface_state_report_t;
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
} _lgsvl_interface_vehicle_kinematic_state_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    autoware_auto_msgs::msg::VehicleKinematicState* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lgsvl_interface_ros2_bridge_kinematic_state_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    autoware_auto_msgs::msg::VehicleStateReport* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _lgsvl_interface_ros2_bridge_state_report_t;
typedef struct {
    struct self_base_t base;
#line 106 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.h"
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    uint32_t sequence_number;
    #line 23 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    std::shared_ptr<lgsvl_interface::LgsvlInterfaceNode> ros2_node;
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/lgsvl_interface/lgsvl_interface_main.lf"
    std::thread spin_thread;
#line 113 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_lgsvl_interface.h"
    _lgsvl_interface_ros2_bridge_kinematic_state_t _lf_ros2_bridge_kinematic_state;
    _lgsvl_interface_ros2_bridge_state_report_t _lf_ros2_bridge_state_report;
    _lgsvl_interface_state_command_t* _lf_state_command;
    // width of -2 indicates that it is not a multiport.
    int _lf_state_command_width;
    // Default input (in case it does not get connected)
    _lgsvl_interface_state_command_t _lf_default__state_command;
    _lgsvl_interface_vehicle_command_t* _lf_vehicle_command;
    // width of -2 indicates that it is not a multiport.
    int _lf_vehicle_command_width;
    // Default input (in case it does not get connected)
    _lgsvl_interface_vehicle_command_t _lf_default__vehicle_command;
    _lgsvl_interface_state_report_t _lf_state_report;
    int _lf_state_report_width;
    _lgsvl_interface_vehicle_kinematic_state_t _lf_vehicle_kinematic_state;
    int _lf_vehicle_kinematic_state_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    reaction_t _lf__reaction_5;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__ros2_bridge_kinematic_state;
    reaction_t* _lf__ros2_bridge_kinematic_state_reactions[1];
    trigger_t _lf__ros2_bridge_state_report;
    reaction_t* _lf__ros2_bridge_state_report_reactions[1];
    trigger_t _lf__state_command;
    reaction_t* _lf__state_command_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__vehicle_command;
    reaction_t* _lf__vehicle_command_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _lgsvl_interface_self_t;
_lgsvl_interface_self_t* new__lgsvl_interface();
#endif // _LGSVL_INTERFACE_H
