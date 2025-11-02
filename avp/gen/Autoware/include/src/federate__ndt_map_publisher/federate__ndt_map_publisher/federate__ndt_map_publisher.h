#ifndef _federate__ndt_map_publisher_main_H
#define _federate__ndt_map_publisher_main_H
#ifndef _FEDERATE__NDT_MAP_PUBLISHER_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1662134665_H
#define TOP_LEVEL_PREAMBLE_1662134665_H
/*Correspondence: Range: [(52, 0), (68, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__ndt_map_publisher.lf)*/#ifdef __cplusplus
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
/*Correspondence: Range: [(7, 4), (10, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/ndt_map_publisher/ndt_map_publisher_main.lf)*/#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
#include "utils.hpp"
#include "constants.hpp"
/*Correspondence: Range: [(46, 0), (49, 24)) -> Range: [(0, 0), (3, 24)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__ndt_map_publisher.lf)*/#include "sensor_msgs/msg/point_cloud2.hpp"
#include "map_publisher.hpp"
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
typedef struct federate__ndt_map_publisher_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} federate__ndt_map_publisher_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} ndt_map_publisher_points_out_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} networksender_0_0_msg_t;
#endif
#endif
