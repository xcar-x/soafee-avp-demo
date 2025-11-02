#ifndef _robot_state_publisher_H
#define _robot_state_publisher_H
#ifndef _ROBOT_STATE_PUBLISHER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_61475588_H
#define TOP_LEVEL_PREAMBLE_61475588_H
/*Correspondence: Range: [(7, 4), (10, 18)) -> Range: [(0, 0), (3, 18)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf)*/#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct robot_state_publisher_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<robot_state_publisher::RobotStatePublisher> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} robot_state_publisher_self_t;
#endif
#endif
