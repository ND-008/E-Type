add_subdirectory(app)
add_subdirectory(core)
add_subdirectory(ui)

add_executable(etype main.cpp)
target_link_libraries(etype PRIVATE app core ui)
target_include_directories(etype PRIVATE ${CMAKE_SOURCE_DIR}/include)