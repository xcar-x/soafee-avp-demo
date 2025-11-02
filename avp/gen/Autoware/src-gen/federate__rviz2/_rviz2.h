#ifndef _RVIZ2_H
#define _RVIZ2_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_2115074947_H
#define TOP_LEVEL_PREAMBLE_2115074947_H
#include <QApplication>  // NOLINT: cpplint is unable to handle the include order here
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"
#include "rviz_common/visualizer_app.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <stdlib.h>
#endif
typedef struct {
    struct self_base_t base;
#line 20 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__rviz2/_rviz2.h"
#line 21 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__rviz2/_rviz2.h"
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _rviz2_self_t;
_rviz2_self_t* new__rviz2();
#endif // _RVIZ2_H
