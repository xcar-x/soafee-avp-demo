#ifndef _OBJECT_COLLISION_ESTIMATOR_H
#define _OBJECT_COLLISION_ESTIMATOR_H
extern "C" {
#include "include/core/reactor.h"
}
#ifndef TOP_LEVEL_PREAMBLE_366173912_H
#define TOP_LEVEL_PREAMBLE_366173912_H
#include "object_collision_estimator_node.hpp"
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
} _object_collision_estimator_filtered_lidar_boxes_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _object_collision_estimator_original_trajectory_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<autoware_auto_msgs::msg::Trajectory> value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _object_collision_estimator_modified_trajectory_t;
typedef struct {
    struct self_base_t base;
    #line 15 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    interval_t STP_offset;
#line 59 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.h"
    #line 24 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    std::shared_ptr<motion::planning::object_collision_estimator_nodes::ObjectCollisionEstimatorNode> ros2_node;
    #line 25 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    std::thread spin_thread;
#line 64 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.h"
    _object_collision_estimator_filtered_lidar_boxes_t* _lf_filtered_lidar_boxes;
    // width of -2 indicates that it is not a multiport.
    int _lf_filtered_lidar_boxes_width;
    // Default input (in case it does not get connected)
    _object_collision_estimator_filtered_lidar_boxes_t _lf_default__filtered_lidar_boxes;
    _object_collision_estimator_original_trajectory_t* _lf_original_trajectory;
    // width of -2 indicates that it is not a multiport.
    int _lf_original_trajectory_width;
    // Default input (in case it does not get connected)
    _object_collision_estimator_original_trajectory_t _lf_default__original_trajectory;
    _object_collision_estimator_modified_trajectory_t _lf_modified_trajectory;
    int _lf_modified_trajectory_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    reaction_t _lf__reaction_2;
    reaction_t _lf__reaction_3;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__filtered_lidar_boxes;
    reaction_t* _lf__filtered_lidar_boxes_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__original_trajectory;
    reaction_t* _lf__original_trajectory_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _object_collision_estimator_self_t;
_object_collision_estimator_self_t* new__object_collision_estimator();
#endif // _OBJECT_COLLISION_ESTIMATOR_H
