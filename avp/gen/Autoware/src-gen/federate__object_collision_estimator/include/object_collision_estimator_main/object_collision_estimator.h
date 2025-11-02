#ifndef _object_collision_estimator_H
#define _object_collision_estimator_H
#ifndef _OBJECT_COLLISION_ESTIMATOR_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_366173912_H
#define TOP_LEVEL_PREAMBLE_366173912_H
/*Correspondence: Range: [(7, 4), (9, 24)) -> Range: [(0, 0), (2, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf)*/#include "object_collision_estimator_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct object_collision_estimator_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t STP_offset;
    std::shared_ptr<motion::planning::object_collision_estimator_nodes::ObjectCollisionEstimatorNode> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} object_collision_estimator_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::BoundingBoxArray> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} object_collision_estimator_filtered_lidar_boxes_t;
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
} object_collision_estimator_original_trajectory_t;
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
} object_collision_estimator_modified_trajectory_t;
#endif
#endif
