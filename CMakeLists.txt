cmake_minimum_required(VERSION 2.8)
project(cmaketutorial)

include(ExternalProject)

#add external project base on folder such as 3rdparty
# ExternalProject_Add(gtest
# 	SOURCE_DIR ${CMAKE_SOURCE_DIR}/thirdparty/googletest-master
# 	CONFIGURE_COMMAND ${CMAKE_COMMAND} -DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR} -G ${CMAKE_GENERATOR} ${CMAKE_SOURCE_DIR}/thirdparty/googletest-master
# ) #add 3rdparty googletest-master source 

ExternalProject_Add(gtest 
	GIT_REPOSITORY https://github.com/google/googletest.git
	CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}	
)
ExternalProject_Add(opencv-3.1.0 
	URL https://github.com/Itseez/opencv/archive/3.1.0.zip
	CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}
)

add_subdirectory(${CMAKE_SOURCE_DIR}/exampleHello)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/opencv)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/hello)
link_directories(${CMAKE_BINARY_DIR}/lib)

# include_directories(${CMAKE_BINARY_DIR}/include ${CMAKE_SOURCE_DIR}/include)

message(${CMAKE_SOURCE_DIR})	
set(CMAKE_VERBOSE_MAKEFILE on)

# set(SOURCES_FILE
# 	#${CMAKE_SOURCE_DIR}/include/hellomake.h
# 	${CMAKE_SOURCE_DIR}/src/example/hellofunc.c
# 	${CMAKE_SOURCE_DIR}/src/example/hellomake.c
# )
# add_executable(hello ${SOURCES_FILE})

# add_executable(gtest1 src/gtest1.cpp)
# target_link_libraries(gtest1 -L${CMAKE_BINARY_DIR}/lib -lgtest -lgtest_main)


