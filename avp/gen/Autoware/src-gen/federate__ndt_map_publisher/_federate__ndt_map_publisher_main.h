#ifndef _FEDERATE__NDT_MAP_PUBLISHER_MAIN_H
#define _FEDERATE__NDT_MAP_PUBLISHER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_ndt_map_publisher.h"
#include "_networksender_0_0.h"
#ifndef TOP_LEVEL_PREAMBLE_1662134665_H
#define TOP_LEVEL_PREAMBLE_1662134665_H
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
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 39 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ndt_map_publisher/_federate__ndt_map_publisher_main.h"
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ndt_map_publisher/_federate__ndt_map_publisher_main.h"
} _federate__ndt_map_publisher_main_main_self_t;
_federate__ndt_map_publisher_main_main_self_t* new__federate__ndt_map_publisher_main();
#endif // _FEDERATE__NDT_MAP_PUBLISHER_MAIN_H
