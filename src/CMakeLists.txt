set(target "src")

file(GLOB hrcs ../${INCLUDE}/*h)
file(GLOB srcs "*.cpp")

find_package(Boost REQUIRED)
if (NOT Boost_FOUND)
	message (SEND_ERROR "Failed to find boost!")
	return()
else()
	include_directories(${Boost_INCLUDE_DIRS})
endif()

# Add library this
add_library(${target} STATIC ${SOURCES} ${hrcs}  ${srcs} )
# Add library BOOST
target_link_libraries(${target} ${Boost_LIBRARIES})