#ifndef _EUCLIDEAN_CLUSTER_DETECTOR_H
#define _EUCLIDEAN_CLUSTER_DETECTOR_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_187831355_H
#define TOP_LEVEL_PREAMBLE_187831355_H
#include "euclidean_cluster_node.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
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
} _euclidean_cluster_detector_points_in_t;
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
} _euclidean_cluster_detector_bounding_boxes_t;
typedef struct {
    struct self_base_t base;
#line 43 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_euclidean_cluster_detector.h"
    #line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/euclidean_cluster_detector/euclidean_cluster_detector_main.lf"
    std::shared_ptr<autoware::perception::segmentation::euclidean_cluster_nodes::EuclideanClusterNode> ros2_node;
    #line 18 "/home/avp/soafee/soafee-avp-demo/avp/src/euclidean_cluster_detector/euclidean_cluster_detector_main.lf"
    std::shared_ptr<sensor_msgs::msg::PointCloud2> points_waiting;
#line 48 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__euclidean_cluster_detector/_euclidean_cluster_detector.h"
    _euclidean_cluster_detector_points_in_t* _lf_points_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_points_in_width;
    // Default input (in case it does not get connected)
    _euclidean_cluster_detector_points_in_t _lf_default__points_in;
    _euclidean_cluster_detector_bounding_boxes_t _lf_bounding_boxes;
    int _lf_bounding_boxes_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__points_in;
    reaction_t* _lf__points_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _euclidean_cluster_detector_self_t;
_euclidean_cluster_detector_self_t* new__euclidean_cluster_detector();
#endif // _EUCLIDEAN_CLUSTER_DETECTOR_H
