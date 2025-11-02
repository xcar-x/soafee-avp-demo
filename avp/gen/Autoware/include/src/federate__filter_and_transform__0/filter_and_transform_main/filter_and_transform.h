#ifndef _filter_and_transform_H
#define _filter_and_transform_H
#ifndef _FILTER_AND_TRANSFORM_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_197116131_H
#define TOP_LEVEL_PREAMBLE_197116131_H
/*Correspondence: Range: [(17, 4), (21, 17)) -> Range: [(0, 0), (4, 17)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf)*/#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct filter_and_transform_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int bank_index;
    std::vector<string> config_namespaces;
    std::vector<char*> lidar_topic_names;
    int count;
    std::shared_ptr<autoware::perception::filters::point_cloud_filter_transform_nodes::PointCloud2FilterTransformNode> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} filter_and_transform_self_t;
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
} filter_and_transform_points_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    sensor_msgs::msg::PointCloud2* value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} filter_and_transform_ros2_bridge_t;
#endif
#endif
