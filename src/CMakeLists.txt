set(target "src")

file(GLOB hrcs ../${INCLUDE}/*h)
file(GLOB srcs "*.cpp")


# Add library this
add_library(${target} STATIC ${SOURCES} ${hrcs}  ${srcs} )