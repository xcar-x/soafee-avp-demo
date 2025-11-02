#ifndef _FEDERATE__ROBOT_STATE_PUBLISHER_MAIN_H
#define _FEDERATE__ROBOT_STATE_PUBLISHER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_robot_state_publisher.h"
#ifndef TOP_LEVEL_PREAMBLE_249323489_H
#define TOP_LEVEL_PREAMBLE_249323489_H
#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
#include "robot_state_publisher/robot_state_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <fstream>
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
#line 34 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_federate__robot_state_publisher_main.h"
#line 35 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_federate__robot_state_publisher_main.h"
} _federate__robot_state_publisher_main_main_self_t;
_federate__robot_state_publisher_main_main_self_t* new__federate__robot_state_publisher_main();
#endif // _FEDERATE__ROBOT_STATE_PUBLISHER_MAIN_H
