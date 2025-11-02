extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/off_map_obstacles_filter_main/off_map_obstacles_filter.h"
#include "_off_map_obstacles_filter.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _off_map_obstacles_filterreaction_function_0(void* instance_args) {
    _off_map_obstacles_filter_self_t* self = (_off_map_obstacles_filter_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _off_map_obstacles_filter_request_t* request = &self->_lf_request;
    #line 26 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
          std::string yaml_path = get_lfavp_config() + "/param/" + OFF_MAP_OBSTACLES_FILTER_PARAM;
    
          rclcpp::NodeOptions nodeOptions = get_node_options_from_yaml(
              yaml_path.c_str(), 
              "/**"
          );
    
          self->ros2_node = std::make_shared<autoware::off_map_obstacles_filter_nodes::OffMapObstaclesFilterNode>(nodeOptions);
          self->spin_thread = create_spin_thread(self->ros2_node);
    
    auto requestPtr = std::make_shared<autoware_auto_msgs::srv::HADMapService::Request>();
    		requestPtr->requested_primitives.push_back(autoware_auto_msgs::srv::HADMapService::Request::FULL_MAP);
    		lf_set(request, requestPtr);
    
    		lf_print("Requesting map.");
#line 30 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_off_map_obstacles_filter.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _off_map_obstacles_filterreaction_function_1(void* instance_args) {
    _off_map_obstacles_filter_self_t* self = (_off_map_obstacles_filter_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    // Mutable input, so copy the input into a temporary variable.
    // The input value on the struct is a copy.
    _off_map_obstacles_filter_original_bounding_boxes_t _lf_tmp_original_bounding_boxes = *(self->_lf_original_bounding_boxes);
    _off_map_obstacles_filter_original_bounding_boxes_t* original_bounding_boxes = &_lf_tmp_original_bounding_boxes;
    int original_bounding_boxes_width = self->_lf_original_bounding_boxes_width; SUPPRESS_UNUSED_WARNING(original_bounding_boxes_width);
    _off_map_obstacles_filter_modified_bounding_boxes_t* modified_bounding_boxes = &self->_lf_modified_bounding_boxes;
    #line 44 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
    self->ros2_node->process_bounding_boxes(original_bounding_boxes->value);
            lf_set(modified_bounding_boxes, original_bounding_boxes->value);
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_off_map_obstacles_filter.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _off_map_obstacles_filterreaction_function_2(void* instance_args) {
    _off_map_obstacles_filter_self_t* self = (_off_map_obstacles_filter_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _off_map_obstacles_filter_map_t* map = self->_lf_map;
    int map_width = self->_lf_map_width; SUPPRESS_UNUSED_WARNING(map_width);
    #line 49 "/home/avp/soafee/soafee-avp-demo/avp/src/off_map_obstacles_filter/off_map_obstacles_filter_main.lf"
    lf_print("Got the map.");
    auto lanelet_map_ptr = std::make_shared<lanelet::LaneletMap>();
    autoware::common::had_map_utils::fromBinaryMsg(*map->value, lanelet_map_ptr);
    self->ros2_node->m_filter = std::make_unique<autoware::off_map_obstacles_filter_nodes::OffMapObstaclesFilter>(lanelet_map_ptr, self->ros2_node->m_overlap_threshold);
    self->wait_for_map = 0;
#line 59 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_off_map_obstacles_filter.cpp"
}
#include "include/api/reaction_macros_undef.h"
_off_map_obstacles_filter_self_t* new__off_map_obstacles_filter() {
    _off_map_obstacles_filter_self_t* self = (_off_map_obstacles_filter_self_t*)lf_new_reactor(sizeof(_off_map_obstacles_filter_self_t));
    // Set input by default to an always absent default input.
    self->_lf_original_bounding_boxes = &self->_lf_default__original_bounding_boxes;
    // Set the default source reactor pointer
    self->_lf_default__original_bounding_boxes._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_map = &self->_lf_default__map;
    // Set the default source reactor pointer
    self->_lf_default__map._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _off_map_obstacles_filterreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _off_map_obstacles_filterreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__reaction_2.number = 2;
    self->_lf__reaction_2.function = _off_map_obstacles_filterreaction_function_2;
    self->_lf__reaction_2.self = self;
    self->_lf__reaction_2.deadline_violation_handler = NULL;
    self->_lf__reaction_2.STP_handler = NULL;
    self->_lf__reaction_2.name = "?";
    self->_lf__reaction_2.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__original_bounding_boxes.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__original_bounding_boxes.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__original_bounding_boxes_reactions[0] = &self->_lf__reaction_1;
    self->_lf__original_bounding_boxes.reactions = &self->_lf__original_bounding_boxes_reactions[0];
    self->_lf__original_bounding_boxes.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__original_bounding_boxes.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__original_bounding_boxes.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::BoundingBoxArray>);
    self->_lf__map.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__map.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__map_reactions[0] = &self->_lf__reaction_2;
    self->_lf__map.reactions = &self->_lf__map_reactions[0];
    self->_lf__map.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__map.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__map.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::HADMapBin>);
    return self;
}
