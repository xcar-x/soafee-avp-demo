#ifndef _RAY_GROUND_CLASSIFIER_H
#define _RAY_GROUND_CLASSIFIER_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_316482646_H
#define TOP_LEVEL_PREAMBLE_316482646_H
#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
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
} _ray_ground_classifier_points_in_t;
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
} _ray_ground_classifier_points_non_ground_t;
typedef struct {
    struct self_base_t base;
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_ray_ground_classifier.h"
    #line 19 "/home/avp/soafee/soafee-avp-demo/avp/src/ray_ground_classifier/ray_ground_classifier_main.lf"
    std::shared_ptr<autoware::perception::filters::ray_ground_classifier_nodes::RayGroundClassifierCloudNode> ros2_node;
#line 48 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__ray_ground_classifier/_ray_ground_classifier.h"
    _ray_ground_classifier_points_in_t* _lf_points_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_points_in_width;
    // Default input (in case it does not get connected)
    _ray_ground_classifier_points_in_t _lf_default__points_in;
    _ray_ground_classifier_points_non_ground_t _lf_points_non_ground;
    int _lf_points_non_ground_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__points_in;
    reaction_t* _lf__points_in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _ray_ground_classifier_self_t;
_ray_ground_classifier_self_t* new__ray_ground_classifier();
#endif // _RAY_GROUND_CLASSIFIER_H
