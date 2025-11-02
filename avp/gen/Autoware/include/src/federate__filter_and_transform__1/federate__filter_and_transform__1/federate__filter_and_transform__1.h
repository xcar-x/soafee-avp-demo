#ifndef _federate__filter_and_transform__1_main_H
#define _federate__filter_and_transform__1_main_H
#ifndef _FEDERATE__FILTER_AND_TRANSFORM__1_MAIN_H // necessary for arduino-cli, which automatically includes headers that are not used
#ifndef TOP_LEVEL_PREAMBLE_1913763479_H
#define TOP_LEVEL_PREAMBLE_1913763479_H
/*Correspondence: Range: [(53, 0), (69, 40)) -> Range: [(0, 0), (16, 40)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__filter_and_transform__1.lf)*/#ifdef __cplusplus
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
/*Correspondence: Range: [(17, 4), (21, 17)) -> Range: [(0, 0), (4, 17)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/src/filter_and_transform/filter_and_transform_main.lf)*/#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
/*Correspondence: Range: [(46, 0), (50, 17)) -> Range: [(0, 0), (4, 17)) (verbatim=true; src=/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src/federate__filter_and_transform__1.lf)*/#include "point_cloud_filter_transform_node.hpp" /* This is AUTOWARE node */
#include "utils.hpp"
#include "constants.hpp"
#include <cstdlib>
#include <string>
#endif
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/schedule.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct federate__filter_and_transform__1_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    int end[0]; // placeholder; MSVC does not compile empty structs
} federate__filter_and_transform__1_self_t;
typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    std::shared_ptr<sensor_msgs::msg::PointCloud2> value;

} filter_and_transform_points_out_t;
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
