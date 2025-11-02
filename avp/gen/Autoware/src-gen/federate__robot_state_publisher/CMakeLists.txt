
cmake_minimum_required(VERSION 3.19)
project(federate__robot_state_publisher LANGUAGES C)

if(CMAKE_BUILD_TYPE STREQUAL "Test")
  set(CMAKE_BUILD_TYPE "Debug")
  if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    find_program(LCOV_BIN lcov)
    if(LCOV_BIN MATCHES "lcov$")
      set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage -fprofile-arcs -ftest-coverage")
    else()
      message("Not producing code coverage information since lcov was not found")
    endif()
  else()
    message("Not producing code coverage information since the selected compiler is no gcc")
  endif()
endif()
# Require C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(DEFAULT_BUILD_TYPE Release)
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE ${DEFAULT_BUILD_TYPE} CACHE STRING "Choose the type of build." FORCE)
endif()

# Do not print install messages
set(CMAKE_INSTALL_MESSAGE NEVER)
# Colorize compilation output
set(CMAKE_COLOR_DIAGNOSTICS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-write-strings")


# Set default values for build parameters
set(LF_REACTION_GRAPH_BREADTH 1 CACHE STRING "")
set(FEDERATED_DECENTRALIZED TRUE CACHE STRING "")
set(EXECUTABLE_PREAMBLE TRUE CACHE STRING "")
set(NUMBER_OF_FEDERATES 20 CACHE STRING "")
set(FEDERATE_ID 17 CACHE STRING "")
set(FEDERATED TRUE CACHE STRING "")
set(LF_CLOCK_SYNC 2 CACHE STRING "")
set(_LF_FEDERATE_NAMES_COMMA_SEPARATED \"federate__lanelet2_visualizer,federate__filter_and_transform__0,federate__filter_and_transform__1,federate__point_cloud_fusion,federate__voxel_grid_downsampler,federate__ray_ground_classifier,federate__euclidean_cluster_detector,federate__ndt_map_publisher,federate__p2d_ndt_localizer,federate__off_map_obstacles_filter,federate__behavior_planner,federate__parking_planner,federate__lane_planner,federate__global_planner,federate__object_collision_estimator,federate__lgsvl_interface,federate__mpc_controller,federate__robot_state_publisher,federate__map_provider,federate__rviz2\" CACHE STRING "")
set(_LF_CLOCK_SYNC_EXCHANGES_PER_INTERVAL 10 CACHE STRING "")
set(NUMBER_OF_WATCHDOGS 0 CACHE STRING "")
set(LF_TRACE TRUE CACHE STRING "")
set(NUMBER_OF_WORKERS 0 CACHE STRING "")
set(_LF_CLOCK_SYNC_PERIOD_NS 5000000 CACHE STRING "")
set(SCHEDULER SCHED_NP CACHE STRING "")
set(_LF_CLOCK_SYNC_ATTENUATION 10 CACHE STRING "")
set(_LF_CLOCK_SYNC_COLLECT_STATS TRUE CACHE STRING "")
set(LOG_LEVEL 2 CACHE STRING "")
set(_LF_CLOCK_SYNC_INITIAL TRUE CACHE STRING "")
set(LF_TRACE_PLUGIN telegraf_lf_trace_plugin CACHE STRING "")
add_subdirectory(core)

set(LF_MAIN_TARGET federate__robot_state_publisher)

# Declare a new executable target and list all its sources
add_executable(
    ${LF_MAIN_TARGET}
    lib/schedule.c
    _federate__robot_state_publisher_main.cpp
    _robot_state_publisher.cpp
    federate__robot_state_publisher.cpp
)

find_library(MATH_LIBRARY m)
if(MATH_LIBRARY)
  target_link_libraries(${LF_MAIN_TARGET} PUBLIC ${MATH_LIBRARY})
endif()
target_link_libraries(${LF_MAIN_TARGET} PRIVATE reactor-c)
target_include_directories(${LF_MAIN_TARGET} PUBLIC .)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/api)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/platform)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/modal_models)
target_include_directories(${LF_MAIN_TARGET} PUBLIC include/core/utils)

# Find threads and link to it
find_package(Threads REQUIRED)
target_link_libraries(${LF_MAIN_TARGET} PRIVATE Threads::Threads)

# Set the number of workers to enable threading/tracing
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC NUMBER_OF_WORKERS=0)


enable_language(CXX)
    install(
        TARGETS ${LF_MAIN_TARGET}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )

include("CMakeListsExtension.txt")
include("federate__robot_state_publisher_extension.cmake")

# Define directory in which files from the 'files' target directive will be put.
target_compile_definitions(${LF_MAIN_TARGET} PUBLIC LF_TARGET_FILES_DIRECTORY="${CMAKE_CURRENT_LIST_DIR}")


