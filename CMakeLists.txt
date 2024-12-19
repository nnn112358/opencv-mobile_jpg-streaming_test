SET(CMAKE_BUILD_TYPE "Release")

SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

SET(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)
SET(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)

SET(OpenCV_DIR /mnt/z/LinuxHome/_LLM/241219_opencv/opencv-mobile/opencv-mobile-4.10.0/install/aarch64/lib/cmake/opencv4)


PROJECT(opencv_jpeg_stream)
cmake_minimum_required(VERSION 3.5)



if(OpenCV_FOUND)
 message(OPENCV_VERSION)
 message(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")
 message(STATUS "OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")
endif(OpenCV_FOUND)


find_package(OpenCV REQUIRED)

link_directories(${OpenCV_LIBRARY_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS} )
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(opencv_jpeg_stream cv_main.cpp )
target_link_libraries(opencv_jpeg_stream ${OpenCV_LIBRARIES})


