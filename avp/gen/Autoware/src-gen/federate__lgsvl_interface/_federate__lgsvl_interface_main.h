#ifndef _FEDERATE__LGSVL_INTERFACE_MAIN_H
#define _FEDERATE__LGSVL_INTERFACE_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networksender_3_3.h"
#include "__lgsvl_interfacevehicle_command.h"
#include "_networkreceiver_28.h"
#include "_networksender_1_1.h"
#include "_lgsvl_interface.h"
#include "_networksender_2_2.h"
#include "_networkreceiver_12.h"
#include "__lgsvl_interfacestate_command.h"
#include "_networksender_0_0.h"
#ifndef TOP_LEVEL_PREAMBLE_1820460116_H
#define TOP_LEVEL_PREAMBLE_1820460116_H
#include "lgsvl_interface/lgsvl_interface_node.hpp"
#include "lgsvl_interface/lgsvl_interface.hpp"
#include "utils.hpp"
#include "constants.hpp"
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
#include "lgsvl_interface/lgsvl_interface_node.hpp"
#include "lgsvl_interface/lgsvl_interface.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_federate__lgsvl_interface_main.h"
#line 47 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lgsvl_interface/_federate__lgsvl_interface_main.h"
} _federate__lgsvl_interface_main_main_self_t;
_federate__lgsvl_interface_main_main_self_t* new__federate__lgsvl_interface_main();
#endif // _FEDERATE__LGSVL_INTERFACE_MAIN_H
