#ifndef _OFF_MAP_OBSTACLES_FILTER_H
#define _OFF_MAP_OBSTACLES_FILTER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_1334804987_H
#define TOP_LEVEL_PREAMBLE_1334804987_H
#include "off_map_obstacles_filter_node.hpp"
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
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
} _off_map_obstacles_filter_original_bounding_boxes_t;
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
} _off_map_obstacles_filter_map_t;
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
} _off_map_obstacles_filter_modified_bounding_boxes_t;
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
} _off_map_obstacles_filter_request_t;
typedef struct {
    struct self_base_t base;
    #line 14 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
    interval_t wait_for_map;
#line 74 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_off_map_obstacles_filter.h"
    #line 22 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
    std::shared_ptr<autoware::off_map_obstacles_filter_nodes::OffMapObstaclesFilterNode> ros2_node;
    #line 23 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
    std::thread spin_thread;
#line 79 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_off_map_obstacles_filter.h"
    _off_map_obstacles_filter_original_bounding_boxes_t* _lf_original_bounding_boxes;
    // width of -2 indicates that it is not a multiport.
    int _lf_original_bounding_boxes_width;
    // Default input (in case it does not get connected)
    _off_map_obstacles_filter_original_bounding_boxes_t _lf_default__original_bounding_boxes;
    _off_map_obstacles_filter_map_t* _lf_map;
    // width of -2 indicates that it is not a multiport.
    int _lf_map_width;
    // Default input (in case it does not get connected)
    _off_map_obstacles_filter_map_t _lf_default__map;
    _off_map_obstacles_filter_modified_bounding_boxes_t _lf_modified_bounding_boxes;
    int _lf_modified_bounding_boxes_width;
    _off_map_obstacles_filter_request_t _lf_request;
    int _lf_request_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__original_bounding_boxes;
    reaction_t* _lf__original_bounding_boxes_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__map;
    reaction_t* _lf__map_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _off_map_obstacles_filter_self_t;
_off_map_obstacles_filter_self_t* new__off_map_obstacles_filter();
#endif // _OFF_MAP_OBSTACLES_FILTER_H
