#ifndef _POINT_CLOUD_FUSION_H
#define _POINT_CLOUD_FUSION_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_3486406_H
#define TOP_LEVEL_PREAMBLE_3486406_H
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "point_cloud_fusion_node.hpp"
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
} _point_cloud_fusion_points_in_t;
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
} _point_cloud_fusion_points_out_t;
typedef struct {
    struct self_base_t base;
    #line 14 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    int in_width;
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_point_cloud_fusion.h"
    #line 18 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    autoware::perception::filters::point_cloud_fusion_nodes::PointCloudFusionNode* ros2_node;
    #line 20 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    bool point_in_0_seen;
    #line 21 "/home/avp/soafee/soafee-avp-demo/avp/src/point_cloud_fusion/point_cloud_fusion_main.lf"
    bool point_in_1_seen;
#line 53 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__point_cloud_fusion/_point_cloud_fusion.h"
    // Multiport input array will be malloc'd later.
    _point_cloud_fusion_points_in_t** _lf_points_in;
    int _lf_points_in_width;
    // Default input (in case it does not get connected)
    _point_cloud_fusion_points_in_t _lf_default__points_in;
    // Struct to support efficiently reading sparse inputs.
    lf_sparse_io_record_t* _lf_points_in__sparse;
    _point_cloud_fusion_points_out_t _lf_points_out;
    int _lf_points_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__points_in;
    reaction_t* _lf__points_in_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__points_in_network_port_status;
    
    #endif // FEDERATED
} _point_cloud_fusion_self_t;
_point_cloud_fusion_self_t* new__point_cloud_fusion();
#endif // _POINT_CLOUD_FUSION_H
