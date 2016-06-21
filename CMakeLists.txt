cmake_minimum_required(VERSION 3.2.2)
project(Placement_of_furniture)

if(CMAKE_COMPILER_IS_GNUCXX)
add_definitions(-std=c++11)
endif()

# Include directory with public headers
set (INCLUDE "./include")
include_directories(${INCLUDE})


# Add all submodules
add_subdirectory(app)
add_subdirectory(src)
