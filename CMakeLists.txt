project(vtl)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
add_subdirectory(Backend)
add_subdirectory(GUI)
