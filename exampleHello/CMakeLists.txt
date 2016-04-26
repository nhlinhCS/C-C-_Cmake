cmake_minimum_required(VERSION 2.8)
project(example) 

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})
include_directories(${cmaketutorial_SOURCE_DIR}/include ${cmaketutorial_BINARY_DIR}/include)
link_directories(${cmaketutorial_BINARY_DIR}/lib)

set(SOURCES_FILE
	${CMAKE_SOURCE_DIR}/exampleHello/hellofunc.c 
	${CMAKE_SOURCE_DIR}/exampleHello/hellomake.c
	)
add_executable(example ${SOURCES_FILE})
add_executable(gtest2 gtest1.cpp)

target_link_libraries(gtest2 -L${cmaketutorial_BINARY_DIR}/lib -lgtest -lgtest_main)
