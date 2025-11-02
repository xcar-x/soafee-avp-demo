#ifndef _FEDERATE__P2D_NDT_LOCALIZER_MAIN_H
#define _FEDERATE__P2D_NDT_LOCALIZER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "__p2d_ndt_localizerndt_map_points_in.h"
#include "_p2d_ndt_localizer.h"
#include "_networkreceiver_5.h"
#include "_networkreceiver_8.h"
#include "__p2d_ndt_localizerfused_downsampled_points_in.h"
#ifndef TOP_LEVEL_PREAMBLE_1606529217_H
#define TOP_LEVEL_PREAMBLE_1606529217_H
#include "ndt_localizer_nodes.hpp"
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
#include "ndt_localizer_nodes.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_federate__p2d_ndt_localizer_main.h"
#line 41 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_federate__p2d_ndt_localizer_main.h"
} _federate__p2d_ndt_localizer_main_main_self_t;
_federate__p2d_ndt_localizer_main_main_self_t* new__federate__p2d_ndt_localizer_main();
#endif // _FEDERATE__P2D_NDT_LOCALIZER_MAIN_H
