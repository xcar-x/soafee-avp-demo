#ifndef _federate__ray_ground_classifier_main_H
#define _federate__ray_ground_classifier_main_H
#ifndef _FEDERATE__RAY_GROUND_CLASSIFIER_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1773141042_H
#define TOP_LEVEL_PREAMBLE_1773141042_H
/*Correspondence: Range: [(46, 0), (50, 24)) -> Range: [(0, 0), (4, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__ray_ground_classifier.lf)*/#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
#include "utils.hpp"
#include "constants.hpp"
/*Correspondence: Range: [(53, 0), (69, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__ray_ground_classifier.lf)*/#ifdef __cplusplus
extern "C" {
#endif
#include "core/federated/federate.h"
#include "core/federated/network/net_common.h"
#include "core/federated/network/net_util.h"
#include "core/federated/clock-sync.h"
#include "core/threaded/reactor_threaded.h"
#include "core/utils/util.h"
extern federate_instance_t _fed;
#ifdef __cplusplus
}
#endif
#include "rcutils/allocator.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rclcpp/serialized_message.hpp"
/*Correspondence: Range: [(7, 4), (11, 24)) -> Range: [(0, 0), (4, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/ray_ground_classifier/ray_ground_classifier_main.lf)*/#include "ray_ground_classifier_cloud_node.hpp"
#include <stdlib.h>
#include <string>
#include "utils.hpp"
#include "constants.hpp"
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct federate__ray_ground_classifier_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} federate__ray_ground_classifier_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} ray_ground_classifier_points_in_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} ray_ground_classifier_points_non_ground_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} networksender_0_0_msg_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} networkreceiver_4_msg_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} _ray_ground_classifierpoints_in_port0_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} _ray_ground_classifierpoints_in_port_t;
#endif
#endif
