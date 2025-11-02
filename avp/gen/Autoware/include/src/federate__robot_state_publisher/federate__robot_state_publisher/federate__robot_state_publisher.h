#ifndef _federate__robot_state_publisher_main_H
#define _federate__robot_state_publisher_main_H
#ifndef _FEDERATE__ROBOT_STATE_PUBLISHER_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_249323489_H
#define TOP_LEVEL_PREAMBLE_249323489_H
/*Correspondence: Range: [(46, 0), (49, 18)) -> Range: [(0, 0), (3, 18)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__robot_state_publisher.lf)*/#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
/*Correspondence: Range: [(7, 4), (10, 18)) -> Range: [(0, 0), (3, 18)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf)*/#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
/*Correspondence: Range: [(52, 0), (64, 6)) -> Range: [(0, 0), (12, 6)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__robot_state_publisher.lf)*/#ifdef __cplusplus
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
typedef struct federate__robot_state_publisher_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} federate__robot_state_publisher_self_t;
#endif
#endif
