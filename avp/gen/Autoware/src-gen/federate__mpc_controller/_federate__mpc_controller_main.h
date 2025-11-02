#ifndef _FEDERATE__MPC_CONTROLLER_MAIN_H
#define _FEDERATE__MPC_CONTROLLER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networkreceiver_16.h"
#include "__mpc_controllervehicle_kinematic_state.h"
#include "_networkreceiver_24.h"
#include "_mpc_controller.h"
#include "_networksender_0_0.h"
#include "__mpc_controllertrajectory.h"
#ifndef TOP_LEVEL_PREAMBLE_1745367560_H
#define TOP_LEVEL_PREAMBLE_1745367560_H
#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
#include "mpc_controller_nodes/mpc_controller_node.hpp" /* This is AUTOWARE node */
    #include "controller_common/controller_base.hpp" /* This is AUTOWARE node */
    #include "utils.hpp"
    #include "constants.hpp"
    #include "websocket_server_sync.hpp"
#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
#include "rcutils/allocator.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rclcpp/serialized_message.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_federate__mpc_controller_main.h"
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__mpc_controller/_federate__mpc_controller_main.h"
} _federate__mpc_controller_main_main_self_t;
_federate__mpc_controller_main_main_self_t* new__federate__mpc_controller_main();
#endif // _FEDERATE__MPC_CONTROLLER_MAIN_H
