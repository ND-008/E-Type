add_executable(test_main test_main.cpp)
target_link_libraries(test_main PRIVATE app core ui)
target_include_directories(test_main PRIVATE ${CMAKE_SOURCE_DIR}/include)