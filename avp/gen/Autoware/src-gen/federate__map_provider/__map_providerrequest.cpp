extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__map_provider/_map_providerrequest.h"
#include "__map_providerrequest.h"
// ***** Start of method declarations.
// ***** End of method declarations.
__map_providerrequest_self_t* new___map_providerrequest() {
    __map_providerrequest_self_t* self = (__map_providerrequest_self_t*)lf_new_reactor(sizeof(__map_providerrequest_self_t));
    // Set input by default to an always absent default input.
    self->_lf_port0 = &self->_lf_default__port0;
    // Set the default source reactor pointer
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port1 = &self->_lf_default__port1;
    // Set the default source reactor pointer
    self->_lf_default__port1._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port2 = &self->_lf_default__port2;
    // Set the default source reactor pointer
    self->_lf_default__port2._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port3 = &self->_lf_default__port3;
    // Set the default source reactor pointer
    self->_lf_default__port3._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port4 = &self->_lf_default__port4;
    // Set the default source reactor pointer
    self->_lf_default__port4._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port5 = &self->_lf_default__port5;
    // Set the default source reactor pointer
    self->_lf_default__port5._base.source_reactor = (self_base_t*)self;
    self->_lf__port0.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    self->_lf__port1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port1.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    self->_lf__port2.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port2.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port2.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    self->_lf__port3.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port3.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port3.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    self->_lf__port4.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port4.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port4.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    self->_lf__port5.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port5.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port5.tmplt.type.element_size = sizeof(std::shared_ptr<autoware_auto_msgs::srv::HADMapService_Request>);
    return self;
}
