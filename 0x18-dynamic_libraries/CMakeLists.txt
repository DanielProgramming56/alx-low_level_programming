cmake_minimum_required(VERSION 3.0)

project(dynamic_libraries LANGUAGES C)

add_executable(dynamic_libraries main.c)

install(TARGETS dynamic_libraries RUNTIME DESTINATION bin)
