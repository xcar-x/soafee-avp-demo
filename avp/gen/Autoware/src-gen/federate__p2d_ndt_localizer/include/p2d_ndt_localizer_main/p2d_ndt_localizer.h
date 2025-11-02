#ifndef _p2d_ndt_localizer_H
#define _p2d_ndt_localizer_H
#ifndef _P2D_NDT_LOCALIZER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_153278502_H
#define TOP_LEVEL_PREAMBLE_153278502_H
/*Correspondence: Range: [(7, 4), (9, 24)) -> Range: [(0, 0), (2, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf)*/#include "ndt_localizer_nodes.hpp"
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
typedef struct p2d_ndt_localizer_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<autoware::localization::ndt_nodes::P2DNDTLocalizerNode> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} p2d_ndt_localizer_self_t;
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
} p2d_ndt_localizer_ndt_map_points_in_t;
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
} p2d_ndt_localizer_fused_downsampled_points_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_action_internal_t _base;
    self_base_t* parent;
    bool has_value;
    int source_id;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} p2d_ndt_localizer_fused_downsampled_points_process_t;
#endif
#endif
