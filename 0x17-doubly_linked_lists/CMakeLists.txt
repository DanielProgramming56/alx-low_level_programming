cmake_minimum_required(VERSION 3.0)

project(double_linked_list LANGUAGES C)

add_executable(double_linked_list main.c)

install(TARGETS double_linked_list RUNTIME DESTINATION bin)
