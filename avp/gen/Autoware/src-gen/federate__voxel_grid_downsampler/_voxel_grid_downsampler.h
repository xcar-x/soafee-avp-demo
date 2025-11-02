#ifndef _VOXEL_GRID_DOWNSAMPLER_H
#define _VOXEL_GRID_DOWNSAMPLER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_187417675_H
#define TOP_LEVEL_PREAMBLE_187417675_H
#include "voxel_cloud_node.hpp"
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
} _voxel_grid_downsampler_points_in_t;
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
} _voxel_grid_downsampler_points_out_t;
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
} _voxel_grid_downsampler_downsample_t;
typedef struct {
    struct self_base_t base;
#line 60 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_voxel_grid_downsampler.h"
    #line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/voxel_grid_downsampler/voxel_grid_downsampler_main.lf"
    std::shared_ptr<autoware::perception::filters::voxel_grid_nodes::VoxelCloudNode> ros2_node;
#line 63 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__voxel_grid_downsampler/_voxel_grid_downsampler.h"
    _voxel_grid_downsampler_downsample_t _lf_downsample;
    _voxel_grid_downsampler_points_in_t* _lf_points_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_points_in_width;
    // Default input (in case it does not get connected)
    _voxel_grid_downsampler_points_in_t _lf_default__points_in;
    _voxel_grid_downsampler_points_out_t _lf_points_out;
    int _lf_points_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__downsample;
    reaction_t* _lf__downsample_reactions[1];
    trigger_t _lf__points_in;
    reaction_t* _lf__points_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _voxel_grid_downsampler_self_t;
_voxel_grid_downsampler_self_t* new__voxel_grid_downsampler();
#endif // _VOXEL_GRID_DOWNSAMPLER_H
