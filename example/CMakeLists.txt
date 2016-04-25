cmake_minimum_required(VERSION 2.8)
project(example) 

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})
include_directories(${hello_SOURCE_DIR}/include ${hello_BINARY_DIR}/include)
link_directories(${hello_BINARY_DIR}/lib)

set(SOURCES_FILE
	${CMAKE_SOURCE_DIR}/example/hellofunc.c 
	${CMAKE_SOURCE_DIR}/example/hellomake.c
	)
add_executable(example ${SOURCES_FILE})
add_executable(gtest2 gtest1.cpp)

target_link_libraries(gtest2 -L${hello_BINARY_DIR}/lib -lgtest -lgtest_main)
