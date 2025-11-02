#ifndef _rviz2_H
#define _rviz2_H
#ifndef _RVIZ2_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_2115074947_H
#define TOP_LEVEL_PREAMBLE_2115074947_H
/*Correspondence: Range: [(7, 4), (14, 19)) -> Range: [(0, 0), (7, 19)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/rviz/rviz_main.lf)*/#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct rviz2_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} rviz2_self_t;
#endif
#endif
