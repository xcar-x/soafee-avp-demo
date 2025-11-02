extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__p2d_ndt_localizer/NetworkReceiver_5.h"
#include "_networkreceiver_5.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _networkreceiver_5reaction_function_0(void* instance_args) {
    _networkreceiver_5_self_t* self = (_networkreceiver_5_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 93 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__p2d_ndt_localizer.lf"
    self->_lf__reaction_1.is_an_input_reaction = true;
#line 16 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_networkreceiver_5.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _networkreceiver_5reaction_function_1(void* instance_args) {
    _networkreceiver_5_self_t* self = (_networkreceiver_5_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    lf_critical_section_enter(self->base.environment);
    // Expose the action struct as a local variable whose name matches the action name.
    _networkreceiver_5_networkMessage_t* networkMessage = &self->_lf_networkMessage;
    // Set the fields of the action struct to match the current trigger.
    networkMessage->is_present = (bool)self->_lf__networkMessage.status;
    networkMessage->has_value = ((self->_lf__networkMessage.tmplt.token) != NULL && (self->_lf__networkMessage.tmplt.token)->value != NULL);
    _lf_replace_template_token((token_template_t*)networkMessage, (self->_lf__networkMessage.tmplt.token));
    if (networkMessage->has_value) {
        networkMessage->value = (uint8_t*)(self->_lf__networkMessage.tmplt.token)->value;
        networkMessage->length = (self->_lf__networkMessage.tmplt.token)->length;
    }
    lf_critical_section_exit(self->base.environment);
    _networkreceiver_5_msg_t* msg = &self->_lf_msg;
    #line 97 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__p2d_ndt_localizer.lf"
    msg->physical_time_of_arrival = self->_lf__networkMessage.physical_time_of_arrival;
    msg->intended_tag = self->_lf__networkMessage.intended_tag;
    auto _lf_message = std::make_unique<rcl_serialized_message_t>( rcl_serialized_message_t{
        .buffer = (uint8_t*)self->_lf__networkMessage.tmplt.token->value,
        .buffer_length = self->_lf__networkMessage.tmplt.token->length,
        .buffer_capacity = self->_lf__networkMessage.tmplt.token->length,
        .allocator = rcl_get_default_allocator()
    });
    auto _lf_msg = std::make_unique<rclcpp::SerializedMessage>(std::move(*_lf_message.get()));
    self->_lf__networkMessage.tmplt.token->value = NULL; // Manually move the data
    using MessageT = sensor_msgs::msg::PointCloud2;
    MessageT deserialized_message = MessageT();
    auto _lf_serializer = rclcpp::Serialization<MessageT>();
    _lf_serializer.deserialize_message(_lf_msg.get(), &deserialized_message);
    auto msg_shared_ptr = std::make_shared<sensor_msgs::msg::PointCloud2>(deserialized_message);
    lf_set(msg, msg_shared_ptr);
#line 52 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__p2d_ndt_localizer/_networkreceiver_5.cpp"
}
#include "include/api/reaction_macros_undef.h"
_networkreceiver_5_self_t* new__networkreceiver_5() {
    _networkreceiver_5_self_t* self = (_networkreceiver_5_self_t*)lf_new_reactor(sizeof(_networkreceiver_5_self_t));
    self->_lf_networkMessage._base.trigger = &self->_lf__networkMessage;
    self->_lf_networkMessage.parent = (self_base_t*)self;
    self->_lf_networkMessage.source_id = -1;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _networkreceiver_5reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _networkreceiver_5reaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__networkMessage.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__networkMessage.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__networkMessage_reactions[0] = &self->_lf__reaction_1;
    self->_lf__networkMessage.reactions = &self->_lf__networkMessage_reactions[0];
    self->_lf__networkMessage.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__networkMessage.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__networkMessage.is_physical = false;
    
    self->_lf__networkMessage.tmplt.type.element_size = sizeof(uint8_t);
    self->_lf_networkMessage.type.element_size = sizeof(uint8_t);
    return self;
}
