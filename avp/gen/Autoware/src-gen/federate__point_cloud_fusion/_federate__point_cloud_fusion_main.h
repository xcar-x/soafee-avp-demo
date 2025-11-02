#ifndef _FEDERATE__POINT_CLOUD_FUSION_MAIN_H
#define _FEDERATE__POINT_CLOUD_FUSION_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networksender_1_1.h"
#include "__point_cloud_fusionpoints_in.h"
#include "_point_cloud_fusion.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_2.h"
#include "_networkreceiver_1.h"
#ifndef TOP_LEVEL_PREAMBLE_581238315_H
#define TOP_LEVEL_PREAMBLE_581238315_H
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
#include "point_cloud_fusion_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "point_cloud_fusion_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_federate__point_cloud_fusion_main.h"
#line 44 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_federate__point_cloud_fusion_main.h"
} _federate__point_cloud_fusion_main_main_self_t;
_federate__point_cloud_fusion_main_main_self_t* new__federate__point_cloud_fusion_main();
#endif // _FEDERATE__POINT_CLOUD_FUSION_MAIN_H
