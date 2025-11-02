#ifndef _federate__rviz2_main_H
#define _federate__rviz2_main_H
#ifndef _FEDERATE__RVIZ2_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1681365431_H
#define TOP_LEVEL_PREAMBLE_1681365431_H
/*Correspondence: Range: [(46, 0), (53, 19)) -> Range: [(0, 0), (7, 19)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__rviz2.lf)*/#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
/*Correspondence: Range: [(7, 4), (14, 19)) -> Range: [(0, 0), (7, 19)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/rviz/rviz_main.lf)*/#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
/*Correspondence: Range: [(56, 0), (68, 6)) -> Range: [(0, 0), (12, 6)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__rviz2.lf)*/#ifdef __cplusplus
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct federate__rviz2_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} federate__rviz2_self_t;
#endif
#endif
