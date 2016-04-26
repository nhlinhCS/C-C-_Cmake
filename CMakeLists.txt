cmake_minimum_required(VERSION 2.8)
project(cmaketutorial)

include(ExternalProject)

#download externale project googletest master
ExternalProject_Add(googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}	
)

add_subdirectory(${CMAKE_SOURCE_DIR}/src/hello)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/gtest)

link_directories(${CMAKE_BINARY_DIR}/lib)

message(${CMAKE_SOURCE_DIR})	
set(CMAKE_VERBOSE_MAKEFILE on)
