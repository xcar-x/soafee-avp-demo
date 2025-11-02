#ifndef _NDT_MAP_PUBLISHER_H
#define _NDT_MAP_PUBLISHER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_631653857_H
#define TOP_LEVEL_PREAMBLE_631653857_H
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
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
} _ndt_map_publisher_points_out_t;
typedef struct {
    struct self_base_t base;
#line 30 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ndt_map_publisher/_ndt_map_publisher.h"
    #line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/ndt_map_publisher/ndt_map_publisher_main.lf"
    std::shared_ptr<autoware::localization::ndt_nodes::NDTMapPublisherNode> ros2_node;
    #line 18 "/home/avp/soafee/soafee-avp-demo/avp/src/ndt_map_publisher/ndt_map_publisher_main.lf"
    std::thread spin_thread;
#line 35 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ndt_map_publisher/_ndt_map_publisher.h"
    _ndt_map_publisher_points_out_t _lf_points_out;
    int _lf_points_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
} _ndt_map_publisher_self_t;
_ndt_map_publisher_self_t* new__ndt_map_publisher();
#endif // _NDT_MAP_PUBLISHER_H
