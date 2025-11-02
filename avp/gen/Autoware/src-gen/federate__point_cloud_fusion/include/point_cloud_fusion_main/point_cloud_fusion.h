#ifndef _point_cloud_fusion_H
#define _point_cloud_fusion_H
#ifndef _POINT_CLOUD_FUSION_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_3486406_H
#define TOP_LEVEL_PREAMBLE_3486406_H
/*Correspondence: Range: [(7, 4), (10, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf)*/#include "sensor_msgs/msg/point_cloud2.hpp"
#include "point_cloud_fusion_node.hpp"
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
typedef struct point_cloud_fusion_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int in_width;
    autoware::perception::filters::point_cloud_fusion_nodes::PointCloudFusionNode* ros2_node;
    bool point_in_0_seen;
    bool point_in_1_seen;
    int end[0]; // placeholder; MSVC does not compile empty structs
} point_cloud_fusion_self_t;
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
} point_cloud_fusion_points_in_t;
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
} point_cloud_fusion_points_out_t;
#endif
#endif
