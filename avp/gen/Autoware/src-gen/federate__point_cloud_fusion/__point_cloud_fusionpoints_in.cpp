extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/federate__point_cloud_fusion/_point_cloud_fusionpoints_in.h"
#include "__point_cloud_fusionpoints_in.h"
// ***** Start of method declarations.
// ***** End of method declarations.
__point_cloud_fusionpoints_in_self_t* new___point_cloud_fusionpoints_in() {
    __point_cloud_fusionpoints_in_self_t* self = (__point_cloud_fusionpoints_in_self_t*)lf_new_reactor(sizeof(__point_cloud_fusionpoints_in_self_t));
    // Set input by default to an always absent default input.
    self->_lf_port0 = &self->_lf_default__port0;
    // Set the default source reactor pointer
    self->_lf_default__port0._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_port1 = &self->_lf_default__port1;
    // Set the default source reactor pointer
    self->_lf_default__port1._base.source_reactor = (self_base_t*)self;
    self->_lf__port0.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port0.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port0.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    self->_lf__port1.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__port1.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__port1.tmplt.type.element_size = sizeof(std::shared_ptr<sensor_msgs::msg::PointCloud2>);
    return self;
}
