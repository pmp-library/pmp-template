file(GLOB SOURCES ./*.cpp)
file(GLOB HEADERS ./*.h)

add_executable(myviewer ${SOURCES} ${HEADERS})
target_link_libraries(myviewer pmp pmp_gl)
