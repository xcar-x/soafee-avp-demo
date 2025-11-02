extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__off_map_obstacles_filter/NetworkSender_1_1.h"
#include "_networksender_1_1.h"
#if defined SENDERINDEXPARAMETER
#undef SENDERINDEXPARAMETER
#endif // SENDERINDEXPARAMETER
#define SENDERINDEXPARAMETER 1
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _networksender_1_1reaction_function_0(void* instance_args) {
    _networksender_1_1_self_t* self = (_networksender_1_1_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _networksender_1_1_msg_t** msg = self->_lf_msg;
    int msg_width = self->_lf_msg_width; SUPPRESS_UNUSED_WARNING(msg_width);
    #line 138 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__off_map_obstacles_filter.lf"
    // Sending from msg[0] in federate federate__off_map_obstacles_filter to object_collision_estimator.filtered_lidar_boxes in federate federate__object_collision_estimator
    if (!msg[0]->is_present) {
    return;
    }
    rclcpp::SerializedMessage serialized_message(0u);
    using MessageT = autoware_auto_msgs::msg::BoundingBoxArray;
    static rclcpp::Serialization<MessageT> _lf_serializer;
    _lf_serializer.serialize_message(msg[0]->value.get() , &serialized_message);
    size_t _lf_message_length = serialized_message.size();
    lf_send_tagged_message(self->base.environment, 150000000, MSG_TYPE_P2P_TAGGED_MESSAGE, 0, 14, "federate 14", _lf_message_length, serialized_message.get_rcl_serialized_message().buffer);
#line 30 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__off_map_obstacles_filter/_networksender_1_1.cpp"
}
#include "include/api/reaction_macros_undef.h"
_networksender_1_1_self_t* new__networksender_1_1() {
    _networksender_1_1_self_t* self = (_networksender_1_1_self_t*)lf_new_reactor(sizeof(_networksender_1_1_self_t));
    // Set the default source reactor pointer
    self->_lf_default__msg._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _networksender_1_1reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__msg.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__msg.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__msg_reactions[0] = &self->_lf__reaction_0;
    self->_lf__msg.reactions = &self->_lf__msg_reactions[0];
    self->_lf__msg.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__msg.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__msg.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::msg::BoundingBoxArray>);
    return self;
}
