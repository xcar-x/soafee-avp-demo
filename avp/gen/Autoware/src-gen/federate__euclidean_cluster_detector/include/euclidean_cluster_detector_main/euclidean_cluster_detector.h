#ifndef _euclidean_cluster_detector_H
#define _euclidean_cluster_detector_H
#ifndef _EUCLIDEAN_CLUSTER_DETECTOR_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_187831355_H
#define TOP_LEVEL_PREAMBLE_187831355_H
/*Correspondence: Range: [(7, 4), (9, 24)) -> Range: [(0, 0), (2, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/euclidean_cluster_detector/euclidean_cluster_detector_main.lf)*/#include "euclidean_cluster_node.hpp"
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
typedef struct euclidean_cluster_detector_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<autoware::perception::segmentation::euclidean_cluster_nodes::EuclideanClusterNode> ros2_node;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> points_waiting;
    int end[0]; // placeholder; MSVC does not compile empty structs
} euclidean_cluster_detector_self_t;
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
} euclidean_cluster_detector_points_in_t;
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
} euclidean_cluster_detector_bounding_boxes_t;
#endif
#endif
