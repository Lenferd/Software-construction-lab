cmake_minimum_required(VERSION 3.5)
project(Placement_of_furniture)

# Include directory with public headers
set (INCLUDE "./include")
include_directories(${INCLUDE})


# Add all submodules
add_subdirectory(app)
add_subdirectory(src)