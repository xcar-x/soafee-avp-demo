#ifndef _FEDERATE__LANELET2_VISUALIZER_MAIN_H
#define _FEDERATE__LANELET2_VISUALIZER_MAIN_H
extern "C" {
#include "include/core/reactor.h"
}
#include "_networkreceiver_31.h"
#include "_networksender_0_0.h"
#include "_lanelet2_map_visualizer.h"
#include "__lanelet2_visualizermap.h"
#ifndef TOP_LEVEL_PREAMBLE_1277079886_H
#define TOP_LEVEL_PREAMBLE_1277079886_H
#ifdef __cplusplus
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
#include <visualization_msgs/msg/marker_array.hpp>
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "lanelet2_map_visualizer.hpp" /* This is AUTOWARE node */
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#include <visualization_msgs/msg/marker_array.hpp>
#include "lanelet2_map_provider_node.hpp" /* This is AUTOWARE node */
#include "lanelet2_map_visualizer.hpp" /* This is AUTOWARE node */
#include "had_map_utils/had_map_conversion.hpp"
#include "utils.hpp"
#include "constants.hpp"
#endif
typedef struct {
    struct self_base_t base;
#line 45 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_federate__lanelet2_visualizer_main.h"
#line 46 "/home/avp/soafee/soafee-avp-demo/avp/fed-gen/Autoware/src-gen/federate__lanelet2_visualizer/_federate__lanelet2_visualizer_main.h"
} _federate__lanelet2_visualizer_main_main_self_t;
_federate__lanelet2_visualizer_main_main_self_t* new__federate__lanelet2_visualizer_main();
#endif // _FEDERATE__LANELET2_VISUALIZER_MAIN_H
