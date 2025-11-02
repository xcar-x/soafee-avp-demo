#ifndef _ray_ground_classifier_H
#define _ray_ground_classifier_H
#ifndef _RAY_GROUND_CLASSIFIER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_316482646_H
#define TOP_LEVEL_PREAMBLE_316482646_H
/*Correspondence: Range: [(7, 4), (11, 24)) -> Range: [(0, 0), (4, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/ray_ground_classifier/ray_ground_classifier_main.lf)*/#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
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
typedef struct ray_ground_classifier_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<autoware::perception::filters::ray_ground_classifier_nodes::RayGroundClassifierCloudNode> ros2_node;
    int end[0]; // placeholder; MSVC does not compile empty structs
} ray_ground_classifier_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} ray_ground_classifier_points_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} ray_ground_classifier_points_non_ground_t;
#endif
#endif
