#ifndef _FEDERATE__OBJECT_COLLISION_ESTIMATOR_MAIN_H
#define _FEDERATE__OBJECT_COLLISION_ESTIMATOR_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networkreceiver_15.h"
#include "_object_collision_estimator.h"
#include "__object_collision_estimatorfiltered_lidar_boxes.h"
#include "_networkreceiver_10.h"
#include "__object_collision_estimatororiginal_trajectory.h"
#include "_networksender_0_0.h"
#ifndef TOP_LEVEL_PREAMBLE_558822035_H
#define TOP_LEVEL_PREAMBLE_558822035_H
#include "object_collision_estimator_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "object_collision_estimator_node.hpp"
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
#endif
typedef struct {
    struct self_base_t base;
#line 41 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_federate__object_collision_estimator_main.h"
#line 42 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_federate__object_collision_estimator_main.h"
} _federate__object_collision_estimator_main_main_self_t;
_federate__object_collision_estimator_main_main_self_t* new__federate__object_collision_estimator_main();
#endif // _FEDERATE__OBJECT_COLLISION_ESTIMATOR_MAIN_H
