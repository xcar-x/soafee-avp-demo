extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/robot_state_publisher_main/robot_state_publisher.h"
#include "_robot_state_publisher.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _robot_state_publisherreaction_function_0(void* instance_args) {
    _robot_state_publisher_self_t* self = (_robot_state_publisher_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 19 "/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf"
    // Parse the urdf/xml file
    std::string urdf_file_name = get_lfavp_config() + "/urdf/" + VEHICLE_URDF;
    std::ifstream f(urdf_file_name); 
    std::stringstream ss;
    ss << f.rdbuf();
    
    try {
        rclcpp::init(0, NULL);
    } catch (...) { /*  Ignore */ }
    
    rclcpp::NodeOptions nodeOptions;
    
    nodeOptions.append_parameter_override("robot_description", ss.str());
    
    self->ros2_node = std::make_shared<robot_state_publisher::RobotStatePublisher>(nodeOptions);
    self->spin_thread = create_spin_thread(self->ros2_node);
#line 31 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_robot_state_publisher.cpp"
}
#include "include/api/reaction_macros_undef.h"
#include "include/api/reaction_macros.h"
void _robot_state_publisherreaction_function_1(void* instance_args) {
    _robot_state_publisher_self_t* self = (_robot_state_publisher_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 38 "/home/avp/soafee/soafee-avp-demo/avp/src/robot_state_publisher/robot_state_publisher_main.lf"
    self->spin_thread.join();
#line 40 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__robot_state_publisher/_robot_state_publisher.cpp"
}
#include "include/api/reaction_macros_undef.h"
_robot_state_publisher_self_t* new__robot_state_publisher() {
    _robot_state_publisher_self_t* self = (_robot_state_publisher_self_t*)lf_new_reactor(sizeof(_robot_state_publisher_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _robot_state_publisherreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = _robot_state_publisherreaction_function_1;
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
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__shutdown.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_1;
    self->_lf__shutdown.last_tag = NEVER_TAG;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    return self;
}
