#ifndef _ndt_map_publisher_H
#define _ndt_map_publisher_H
#ifndef _NDT_MAP_PUBLISHER_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_631653857_H
#define TOP_LEVEL_PREAMBLE_631653857_H
/*Correspondence: Range: [(7, 4), (10, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/ndt_map_publisher/ndt_map_publisher_main.lf)*/#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
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
typedef struct ndt_map_publisher_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    std::shared_ptr<autoware::localization::ndt_nodes::NDTMapPublisherNode> ros2_node;
    std::thread spin_thread;
    int end[0]; // placeholder; MSVC does not compile empty structs
} ndt_map_publisher_self_t;
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
} ndt_map_publisher_points_out_t;
#endif
#endif
