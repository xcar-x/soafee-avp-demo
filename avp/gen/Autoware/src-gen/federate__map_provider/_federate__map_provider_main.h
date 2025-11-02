#ifndef _FEDERATE__MAP_PROVIDER_MAIN_H
#define _FEDERATE__MAP_PROVIDER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networksender_3_3.h"
#include "_networkreceiver_0.h"
#include "_networksender_4_4.h"
#include "_networksender_1_1.h"
#include "_networksender_2_2.h"
#include "__map_providerrequest.h"
#include "_networkreceiver_20.h"
#include "_networksender_0_0.h"
#include "_networkreceiver_17.h"
#include "_networkreceiver_11.h"
#include "_networkreceiver_9.h"
#include "_networkreceiver_21.h"
#include "_lanelet2_map_provider.h"
#include "_networksender_5_5.h"
#ifndef TOP_LEVEL_PREAMBLE_335541164_H
#define TOP_LEVEL_PREAMBLE_335541164_H
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
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
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 49 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_federate__map_provider_main.h"
#line 50 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__map_provider/_federate__map_provider_main.h"
} _federate__map_provider_main_main_self_t;
_federate__map_provider_main_main_self_t* new__federate__map_provider_main();
#endif // _FEDERATE__MAP_PROVIDER_MAIN_H
