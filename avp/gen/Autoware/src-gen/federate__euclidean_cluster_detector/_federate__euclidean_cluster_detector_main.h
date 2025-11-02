#ifndef _FEDERATE__EUCLIDEAN_CLUSTER_DETECTOR_MAIN_H
#define _FEDERATE__EUCLIDEAN_CLUSTER_DETECTOR_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_euclidean_cluster_detector.h"
#include "_networkreceiver_6.h"
#include "_networksender_0_0.h"
#include "__euclidean_cluster_detectorpoints_in.h"
#ifndef TOP_LEVEL_PREAMBLE_277356940_H
#define TOP_LEVEL_PREAMBLE_277356940_H
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
#include "euclidean_cluster_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include "euclidean_cluster_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 39 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_federate__euclidean_cluster_detector_main.h"
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_federate__euclidean_cluster_detector_main.h"
} _federate__euclidean_cluster_detector_main_main_self_t;
_federate__euclidean_cluster_detector_main_main_self_t* new__federate__euclidean_cluster_detector_main();
#endif // _FEDERATE__EUCLIDEAN_CLUSTER_DETECTOR_MAIN_H
