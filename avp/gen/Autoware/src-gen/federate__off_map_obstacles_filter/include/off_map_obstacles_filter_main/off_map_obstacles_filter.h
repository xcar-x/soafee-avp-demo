#ifndef _off_map_obstacles_filter_H
#define _off_map_obstacles_filter_H
#ifndef _OFF_MAP_OBSTACLES_FILTER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1334804987_H
#define TOP_LEVEL_PREAMBLE_1334804987_H
/*Correspondence: Range: [(7, 4), (10, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf)*/#include "off_map_obstacles_filter_node.hpp"
#include "had_map_utils/had_map_conversion.hpp"
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
typedef struct off_map_obstacles_filter_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    interval_t wait_for_map;
    std::shared_ptr<autoware::off_map_obstacles_filter_nodes::OffMapObstaclesFilterNode> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} off_map_obstacles_filter_self_t;
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
} off_map_obstacles_filter_original_bounding_boxes_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::HADMapBin> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} off_map_obstacles_filter_map_t;
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
} off_map_obstacles_filter_modified_bounding_boxes_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} off_map_obstacles_filter_request_t;
#endif
#endif
