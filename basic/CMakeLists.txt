cmake_minimum_required(VERSION 3.26)

project(basic_lab CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(matrix src/matrix.cpp)
target_include_directories(matrix PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(circle src/circle.cpp src/point.cpp)
target_include_directories(circle PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(basic_main src/basic_main.cpp)
target_link_libraries(basic_main matrix)
target_include_directories(basic_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(matrix_main src/matrix_main.cpp)
target_link_libraries(matrix_main matrix)
target_include_directories(matrix_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(circle_main src/circle_main.cpp)
target_link_libraries(circle_main circle)
target_include_directories(circle_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
