add_library(core Exercise.cpp Lesson.cpp)
target_include_directories(core PUBLIC ${CMAKE_SOURCE_DIR}/include/core)