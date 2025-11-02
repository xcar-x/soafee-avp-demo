#ifndef _P2D_NDT_LOCALIZER_H
#define _P2D_NDT_LOCALIZER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_153278502_H
#define TOP_LEVEL_PREAMBLE_153278502_H
#include "ndt_localizer_nodes.hpp"
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
} _p2d_ndt_localizer_ndt_map_points_in_t;
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
} _p2d_ndt_localizer_fused_downsampled_points_in_t;
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
} _p2d_ndt_localizer_fused_downsampled_points_process_t;
typedef struct {
    struct self_base_t base;
#line 60 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.h"
    #line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    std::shared_ptr<autoware::localization::ndt_nodes::P2DNDTLocalizerNode> ros2_node;
    #line 18 "/home/avp/soafee/soafee-avp-demo/avp/src/p2d_ndt_localizer/p2d_ndt_localizer_main.lf"
    std::thread spin_thread;
#line 65 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_p2d_ndt_localizer.h"
    _p2d_ndt_localizer_fused_downsampled_points_process_t _lf_fused_downsampled_points_process;
    _p2d_ndt_localizer_ndt_map_points_in_t* _lf_ndt_map_points_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_ndt_map_points_in_width;
    // Default input (in case it does not get connected)
    _p2d_ndt_localizer_ndt_map_points_in_t _lf_default__ndt_map_points_in;
    _p2d_ndt_localizer_fused_downsampled_points_in_t* _lf_fused_downsampled_points_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_fused_downsampled_points_in_width;
    // Default input (in case it does not get connected)
    _p2d_ndt_localizer_fused_downsampled_points_in_t _lf_default__fused_downsampled_points_in;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    reaction_t _lf__reaction_4;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__fused_downsampled_points_process;
    reaction_t* _lf__fused_downsampled_points_process_reactions[1];
    trigger_t _lf__ndt_map_points_in;
    reaction_t* _lf__ndt_map_points_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__fused_downsampled_points_in;
    reaction_t* _lf__fused_downsampled_points_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _p2d_ndt_localizer_self_t;
_p2d_ndt_localizer_self_t* new__p2d_ndt_localizer();
#endif // _P2D_NDT_LOCALIZER_H
