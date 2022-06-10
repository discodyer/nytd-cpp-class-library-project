cmake_minimum_required(VERSION 3.0.0)

SET(PROJECT_NAME Library)
project(${PROJECT_NAME})
#include(CTest)
#enable_testing()

MESSAGE(STATUS "operation system is ${CMAKE_SYSTEM}")

include_directories(./include)

aux_source_directory(src DIR_SRCS)

add_executable(${PROJECT_NAME} ${DIR_SRCS})

message(STATUS "###################################")
message(STATUS "Project: ${PROJECT_NAME}")
message(STATUS "###################################")
