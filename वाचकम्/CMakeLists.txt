add_executable(vackm "वाचकम्.cpp")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
target_include_directories(vackm PRIVATE "../Backend")
target_link_libraries(vackm vtl)
