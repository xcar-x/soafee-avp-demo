#ifndef __object_collision_estimatororiginal_trajectory_H
#define __object_collision_estimatororiginal_trajectory_H
#ifndef __OBJECT_COLLISION_ESTIMATORORIGINAL_TRAJECTORY_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_558822035_H
#define TOP_LEVEL_PREAMBLE_558822035_H
/*Correspondence: Range: [(46, 0), (48, 24)) -> Range: [(0, 0), (2, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__object_collision_estimator.lf)*/#include "object_collision_estimator_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
/*Correspondence: Range: [(51, 0), (67, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__object_collision_estimator.lf)*/#ifdef __cplusplus
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
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct _object_collision_estimatororiginal_trajectory_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} _object_collision_estimatororiginal_trajectory_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _object_collision_estimatororiginal_trajectory_port0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _object_collision_estimatororiginal_trajectory_port_t;
#endif
#endif
