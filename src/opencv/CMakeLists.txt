project(opencv CXX C)

cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${${PROJECT_NAME}_BINARY_DIR})
include_directories(${opencv_BINARY_DIR}/include)
link_directories(${opencv_BINARY_DIR}/lib)

add_executable(opencvex opencv.cpp)
target_link_libraries(opencvex 
	-L${opencv_BINARY_DIR}/lib 
	-lopencv_core
	-lopencv_highgui
	-lopencv_objdetect
	-lopencv_imgproc
	-lopencv_videoio
)
