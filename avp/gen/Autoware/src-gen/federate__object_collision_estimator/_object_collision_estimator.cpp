extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/object_collision_estimator_main/object_collision_estimator.h"
#include "_object_collision_estimator.h"
// *********** From the preamble, verbatim:
#line 17 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
#include "visualize.hpp"
#line 11 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"

// *********** End of preamble.
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _object_collision_estimatorreaction_function_0(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 28 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    std::string yaml_path = get_lfavp_config() + "/param/" + OBJ_COLLISION_EST_PARAM;
    
            rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
                yaml_path.c_str(), 
                "/**"
            );
    
            self->ros2_node = std::make_shared<motion::planning::object_collision_estimator_nodes::ObjectCollisionEstimatorNode>(nodeOptions);
            self->spin_thread = create_spin_thread(self->ros2_node);
#line 30 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _object_collision_estimatorreaction_function_1(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_filtered_lidar_boxes_t* filtered_lidar_boxes = self->_lf_filtered_lidar_boxes;
    int filtered_lidar_boxes_width = self->_lf_filtered_lidar_boxes_width; SUPPRESS_UNUSED_WARNING(filtered_lidar_boxes_width);
    #line 40 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    self->ros2_node->on_bounding_box(filtered_lidar_boxes->value);
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
void _object_collision_estimator_STP_function1(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_filtered_lidar_boxes_t* filtered_lidar_boxes = self->_lf_filtered_lidar_boxes;
    int filtered_lidar_boxes_width = self->_lf_filtered_lidar_boxes_width; SUPPRESS_UNUSED_WARNING(filtered_lidar_boxes_width);
    #line 42 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    // An STP violation means that the total execution time of the LiDAR pipeline exceeds
    // the logical delay on the connection from `off_map_obstacles_filter` to us.
    // We allow this as long as the lag wrt the intended tag is less than 200 msec
    interval_t lag = lf_time_physical() - filtered_lidar_boxes->intended_tag.time;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `filtered_lidar_boxes`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        filtered_lidar_boxes->intended_tag.time,
        lf_time_logical(),
        lf_time_logical() - filtered_lidar_boxes->intended_tag.time,
        lag
    );
    
    if (lag < MSEC(200)) {
        self->ros2_node->on_bounding_box(filtered_lidar_boxes->value);
    } else {
        lf_print_error("Dropping lidar input due to too high lag");
    }
#line 64 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
void _object_collision_estimator_deadline_function1(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_filtered_lidar_boxes_t* filtered_lidar_boxes = self->_lf_filtered_lidar_boxes;
    int filtered_lidar_boxes_width = self->_lf_filtered_lidar_boxes_width; SUPPRESS_UNUSED_WARNING(filtered_lidar_boxes_width);
    #line 61 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    // A deadline violation means that the LiDAR events arrived in time, but have been delayed
    // on our event queue due to excessive processing time of the trajectories. In this case,
    // we drop the stale point clouds and instead wait for new ones.
    lf_print_warning(PRINTF_TIME ": Discarding stale (" PRINTF_TIME ") filtered_lidar_boxes event", lf_time_physical_elapsed(), lf_time_physical() - lf_time_logical());
#line 75 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _object_collision_estimatorreaction_function_2(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_original_trajectory_t* original_trajectory = self->_lf_original_trajectory;
    int original_trajectory_width = self->_lf_original_trajectory_width; SUPPRESS_UNUSED_WARNING(original_trajectory_width);
    _object_collision_estimator_modified_trajectory_t* modified_trajectory = &self->_lf_modified_trajectory;
    #line 68 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    lf_set(modified_trajectory, original_trajectory->value);
    
    // m_estimator performs the collision estimation and the trajectory will get updated inside
    self->ros2_node->m_estimator->updatePlan(*modified_trajectory->value);
    
    // ROS stuff to make rviz2 show pretty boxes:
    // publish trajectory bounding box for visualization
    auto trajectory_bbox = self->ros2_node->m_estimator->getTrajectoryBoundingBox();
    trajectory_bbox.header = modified_trajectory->value->header;
    auto marker = motion::planning::object_collision_estimator_nodes::toVisualizationMarkerArray(trajectory_bbox, modified_trajectory->value->points.size());
    self->ros2_node->m_trajectory_bbox_pub->publish(marker);
#line 96 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
void _object_collision_estimator_STP_function2(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_original_trajectory_t* original_trajectory = self->_lf_original_trajectory;
    int original_trajectory_width = self->_lf_original_trajectory_width; SUPPRESS_UNUSED_WARNING(original_trajectory_width);
    _object_collision_estimator_modified_trajectory_t* modified_trajectory = &self->_lf_modified_trajectory;
    #line 80 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    // An STP violation here means that we handled some input from filtered_lidar_boxes
    // and then later an "earlier" original_trajectory arrived.
    interval_t lag = lf_time_physical() - original_trajectory->intended_tag.time;
    lf_print_warning(PRINTF_TIME " ms: STP violation on `origingal_trajectory`. Intended tag=" PRINTF_TIME ", Got tag=" PRINTF_TIME " delta=" PRINTF_TIME ". Original lag=" PRINTF_TIME, 
        lf_time_physical_elapsed() / MSEC(1), 
        original_trajectory->intended_tag.time,
        lf_time_logical(),
        lf_time_logical() - original_trajectory->intended_tag.time,
        lag
    );
    
    // For now we still handle it (except skip the rviz stuff.
    lf_set(modified_trajectory, original_trajectory->value);
    self->ros2_node->m_estimator->updatePlan(*modified_trajectory->value);
#line 118 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
void _object_collision_estimator_deadline_function2(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _object_collision_estimator_original_trajectory_t* original_trajectory = self->_lf_original_trajectory;
    int original_trajectory_width = self->_lf_original_trajectory_width; SUPPRESS_UNUSED_WARNING(original_trajectory_width);
    _object_collision_estimator_modified_trajectory_t* modified_trajectory = &self->_lf_modified_trajectory;
    #line 97 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    lf_print_warning(PRINTF_TIME ": Deadline violation on original_trajectory. ", lf_time_physical_elapsed());
    // Send the trajectory back unmodified
    lf_set(modified_trajectory, original_trajectory->value);
    // FIXME: still do collision estimation?
#line 130 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _object_collision_estimatorreaction_function_3(void* instance_args) {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 104 "/home/avp/soafee/soafee-avp-demo/avp/src/object_collision_estimator/object_collision_estimator_main.lf"
    self->spin_thread.join();
#line 139 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__object_collision_estimator/_object_collision_estimator.cpp"
}
#include "include/api/reaction_macros_undef.h"
_object_collision_estimator_self_t* new__object_collision_estimator() {
    _object_collision_estimator_self_t* self = (_object_collision_estimator_self_t*)lf_new_reactor(sizeof(_object_collision_estimator_self_t));
    // Set input by default to an always absent default input.
    self->_lf_filtered_lidar_boxes = &self->_lf_default__filtered_lidar_boxes;
    // Set the default source reactor pointer
    self->_lf_default__filtered_lidar_boxes._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_original_trajectory = &self->_lf_default__original_trajectory;
    // Set the default source reactor pointer
    self->_lf_default__original_trajectory._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _object_collision_estimatorreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _object_collision_estimatorreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = &_object_collision_estimator_deadline_function1;
    self->_lf__reaction_1.STP_handler = &_object_collision_estimator_STP_function1;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _object_collision_estimatorreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = &_object_collision_estimator_deadline_function2;
    self->_lf__reaction_2.STP_handler = &_object_collision_estimator_STP_function2;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    self->_lf__reaction_3.number = 3;
    self->_lf__reaction_3.function = _object_collision_estimatorreaction_function_3;
    self->_lf__reaction_3.self = self;
    self->_lf__reaction_3.deadline_violation_handler = NULL;
    self->_lf__reaction_3.STP_handler = NULL;
    self->_lf__reaction_3.name = "?";
    self->_lf__reaction_3.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_3;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__filtered_lidar_boxes.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__filtered_lidar_boxes.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__filtered_lidar_boxes_reactions[0] = &self->_lf__reaction_1;
    self->_lf__filtered_lidar_boxes.reactions = &self->_lf__filtered_lidar_boxes_reactions[0];
    self->_lf__filtered_lidar_boxes.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__filtered_lidar_boxes.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__filtered_lidar_boxes.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::BoundingBoxArray>);
    self->_lf__original_trajectory.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__original_trajectory.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__original_trajectory_reactions[0] = &self->_lf__reaction_2;
    self->_lf__original_trajectory.reactions = &self->_lf__original_trajectory_reactions[0];
    self->_lf__original_trajectory.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__original_trajectory.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__original_trajectory.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::Trajectory>);
    return self;
}
