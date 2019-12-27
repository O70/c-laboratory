cmake_minimum_required(VERSION 3.15)
project(c_laboratory C)

set(CMAKE_C_STANDARD 11)

#include_directories(.)

#add_executable(c_laboratory
#        main.c
#        testc.h)

#aux_source_directory(src DIR_SRCS)
#set(TEST_MATH ${DIR_SRCS})
#add_executable(${PROJECT_NAME} ${TEST_MATH})

aux_source_directory(src DIR_SRCS)
add_executable(${PROJECT_NAME} ${DIR_SRCS})
