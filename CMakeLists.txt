cmake_minimum_required(VERSION 2.8.3)
project(helelani_common)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
find_package(catkin REQUIRED message_generation std_msgs geometry_msgs)

################################################
## Declare ROS messages, services and actions ##
################################################

add_message_files(
  DIRECTORY msg
  FILES
  Imu.msg Motor.msg Analog.msg CameraCtrl.msg
  DriveCommand.msg Mission.msg Throttle.msg)

add_service_files(
  DIRECTORY srv
  FILES MissionStart.srv)

generate_messages(DEPENDENCIES std_msgs geometry_msgs)

###################################
## catkin specific configuration ##
###################################

catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS std_msgs geometry_msgs message_runtime
)

#############
## Install ##
#############

## Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)
