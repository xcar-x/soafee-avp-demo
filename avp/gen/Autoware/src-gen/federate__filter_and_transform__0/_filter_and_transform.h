#ifndef _FILTER_AND_TRANSFORM_H
#define _FILTER_AND_TRANSFORM_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_197116131_H
#define TOP_LEVEL_PREAMBLE_197116131_H
#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
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
} _filter_and_transform_points_out_t;
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
} _filter_and_transform_ros2_bridge_t;
typedef struct {
    struct self_base_t base;
    #line 26 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    int bank_index;
    #line 27 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    std::vector<string> config_namespaces;
    #line 28 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    std::vector<char*> lidar_topic_names;
#line 54 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__0/_filter_and_transform.h"
    #line 33 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    int count;
    #line 34 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    std::shared_ptr<autoware::perception::filters::point_cloud_filter_transform_nodes::PointCloud2FilterTransformNode> ros2_node;
    #line 35 "/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf"
    std::thread spin_thread;
#line 61 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__filter_and_transform__0/_filter_and_transform.h"
    _filter_and_transform_ros2_bridge_t _lf_ros2_bridge;
    _filter_and_transform_points_out_t _lf_points_out;
    int _lf_points_out_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__ros2_bridge;
    reaction_t* _lf__ros2_bridge_reactions[1];
} _filter_and_transform_self_t;
_filter_and_transform_self_t* new__filter_and_transform();
#endif // _FILTER_AND_TRANSFORM_H
