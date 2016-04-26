project(hello)
cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})

include_directories(${cmaketutorial_SOURCE_DIR}/include ${cmaketutorial_BINARY_DIR}/include)
link_directories(${hello_BINARY_DIR}/lib)

set(SOURCES_FILE
	hellomake.c
	main.c
)
add_executable(hello ${SOURCES_FILE})

add_executable(gtest1 gtest1.cpp)
target_link_libraries(gtest1 -L${cmaketutorial_BINARY_DIR}/lib -lgtest -lgtest_main)
