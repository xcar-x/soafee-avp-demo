#ifndef _FEDERATE__RVIZ2_MAIN_H
#define _FEDERATE__RVIZ2_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_rviz2.h"
#ifndef TOP_LEVEL_PREAMBLE_1681365431_H
#define TOP_LEVEL_PREAMBLE_1681365431_H
#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
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
#endif
typedef struct {
    struct self_base_t base;
#line 42 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__rviz2/_federate__rviz2_main.h"
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__rviz2/_federate__rviz2_main.h"
} _federate__rviz2_main_main_self_t;
_federate__rviz2_main_main_self_t* new__federate__rviz2_main();
#endif // _FEDERATE__RVIZ2_MAIN_H
