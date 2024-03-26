cmake_minimum_required(VERSION 3.26)

project(basic_lab CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(matrix src/matrix.cpp)
target_include_directories(matrix PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main src/main.cpp)
target_link_libraries(main matrix)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
