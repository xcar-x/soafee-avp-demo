#ifndef _FEDERATE__GLOBAL_PLANNER_MAIN_H
#define _FEDERATE__GLOBAL_PLANNER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_global_planner.h"
#include "_networkreceiver_27.h"
#include "__global_plannervehicle_kinematic_state.h"
#include "_networksender_1_1.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_30.h"
#include "__global_plannermap.h"
#ifndef TOP_LEVEL_PREAMBLE_1508292052_H
#define TOP_LEVEL_PREAMBLE_1508292052_H
#include "lanelet2_global_planner_node.hpp" /* This is AUTOWARE node */
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
#include "lanelet2_global_planner_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 42 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_federate__global_planner_main.h"
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__global_planner/_federate__global_planner_main.h"
} _federate__global_planner_main_main_self_t;
_federate__global_planner_main_main_self_t* new__federate__global_planner_main();
#endif // _FEDERATE__GLOBAL_PLANNER_MAIN_H
