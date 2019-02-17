file(GLOB SOURCES ./*.cpp)
file(GLOB HEADERS ./*.h)

add_executable(myviewer ${SOURCES} ${HEADERS})
target_link_libraries(myviewer pmp_vis)

if (EMSCRIPTEN)
    set_target_properties(myviewer PROPERTIES LINK_FLAGS "--shell-file ${PROJECT_SOURCE_DIR}/external/pmp-library/src/apps/data/shell.html --preload-file ${PROJECT_SOURCE_DIR}/external/pmp-library/external/pmp-data/off/bunny.off@input.off")
endif()
