#ifndef _FEDERATE__RAY_GROUND_CLASSIFIER_MAIN_H
#define _FEDERATE__RAY_GROUND_CLASSIFIER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "__ray_ground_classifierpoints_in.h"
#include "_ray_ground_classifier.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_4.h"
#ifndef TOP_LEVEL_PREAMBLE_1773141042_H
#define TOP_LEVEL_PREAMBLE_1773141042_H
#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
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
#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_federate__ray_ground_classifier_main.h"
#line 44 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_federate__ray_ground_classifier_main.h"
} _federate__ray_ground_classifier_main_main_self_t;
_federate__ray_ground_classifier_main_main_self_t* new__federate__ray_ground_classifier_main();
#endif // _FEDERATE__RAY_GROUND_CLASSIFIER_MAIN_H
