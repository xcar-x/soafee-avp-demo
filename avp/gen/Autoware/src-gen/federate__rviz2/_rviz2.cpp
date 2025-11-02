extern "C" {
#include "include/api/schedule.h"
#include "low_level_platform/api/low_level_platform.h"
}
#include "include/rviz_main/rviz2.h"
#include "_rviz2.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _rviz2reaction_function_0(void* instance_args) {
    _rviz2_self_t* self = (_rviz2_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 20 "/home/avp/soafee/soafee-avp-demo/avp/src/rviz/rviz_main.lf"
    static std::string rviz_config = get_lfavp_config() + "/rviz/" + RVIZ_CONFIG;
    
    int argc = 3;
    char *argv[] = {
        "lf_rviz",
        "-d",
        &rviz_config[0],
        NULL
    };
    
    QApplication qapp(argc, argv);
    
    // TODO(wjwwood): use node's logger here in stead
    auto logger = rclcpp::get_logger("rviz2");
    // install logging handlers to route logging through ROS's logging system
    rviz_common::set_logging_handlers(
        [logger](const std::string & msg, const std::string &, size_t) {
          RCLCPP_DEBUG(logger, msg.c_str());
        },
        [logger](const std::string & msg, const std::string &, size_t) {
          RCLCPP_INFO(logger, msg.c_str());
        },
        [logger](const std::string & msg, const std::string &, size_t) {
          RCLCPP_WARN(logger, msg.c_str());
        },
        [logger](const std::string & msg, const std::string &, size_t) {
          RCLCPP_ERROR(logger, msg.c_str());
        }
    );
    
    rviz_common::VisualizerApp vapp(
     std::make_unique<rviz_common::ros_integration::RosClientAbstraction>());
    vapp.setApp(&qapp);
    if (vapp.init(argc, argv)) {
        exit(qapp.exec());
    } else {
        exit(1);
    }
#line 53 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__rviz2/_rviz2.cpp"
}
#include "include/api/reaction_macros_undef.h"
_rviz2_self_t* new__rviz2() {
    _rviz2_self_t* self = (_rviz2_self_t*)lf_new_reactor(sizeof(_rviz2_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _rviz2reaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last_tag = NEVER_TAG;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    return self;
}
