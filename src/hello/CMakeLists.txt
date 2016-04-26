project(hello)
cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})

include_directories(${cmaketutorial_SOURCE_DIR}/include)

set(SOURCES_FILE
	hellomake.c
	main.c
)
add_executable(hello ${SOURCES_FILE})