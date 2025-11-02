#ifndef _ROBOT_STATE_PUBLISHER_H
#define _ROBOT_STATE_PUBLISHER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_61475588_H
#define TOP_LEVEL_PREAMBLE_61475588_H
#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
#endif
typedef struct {
    struct self_base_t base;
#line 16 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_robot_state_publisher.h"
    #line 15 "/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf"
    std::shared_ptr<robot_state_publisher::RobotStatePublisher> ros2_node;
    #line 16 "/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf"
    std::thread spin_thread;
#line 21 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_robot_state_publisher.h"
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
} _robot_state_publisher_self_t;
_robot_state_publisher_self_t* new__robot_state_publisher();
#endif // _ROBOT_STATE_PUBLISHER_H
