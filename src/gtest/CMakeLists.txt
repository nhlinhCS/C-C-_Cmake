project(googletest)
cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})

include_directories(${cmaketutorial_BINARY_DIR}/include)

link_directories(${googletest_BINARY_DIR}/lib)

add_executable(gtest gtest1.cpp)

target_link_libraries(gtest -L${cmaketutorial_BINARY_DIR}/lib -lgtest -lgtest_main)
	