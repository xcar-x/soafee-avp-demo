#ifndef _FEDERATE__FILTER_AND_TRANSFORM__0_MAIN_H
#define _FEDERATE__FILTER_AND_TRANSFORM__0_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_filter_and_transform.h"
#include "_networksender_0_0.h"
#ifndef TOP_LEVEL_PREAMBLE_187287956_H
#define TOP_LEVEL_PREAMBLE_187287956_H
#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
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
#line 41 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__0/_federate__filter_and_transform__0_main.h"
#line 42 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__0/_federate__filter_and_transform__0_main.h"
} _federate__filter_and_transform__0_main_main_self_t;
_federate__filter_and_transform__0_main_main_self_t* new__federate__filter_and_transform__0_main();
#endif // _FEDERATE__FILTER_AND_TRANSFORM__0_MAIN_H
