set(target "app")

file(GLOB srcs "*.cpp")


add_executable(${target} ${srcs} ${hdrs})

target_link_libraries(${target} src ${LIBRARY})