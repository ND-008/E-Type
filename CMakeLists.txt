cmake_minimum_required(VERSION 3.10)
project(E-Type VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Build type defaults
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
endif()

# Debug/Release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

# Platform-specific settings
if(WIN32)
    message(STATUS "Configuring for Windows")
    # Example: set WIN32 flag for GUI apps
    # set(CMAKE_WIN32_EXECUTABLE TRUE)
elseif(APPLE)
    message(STATUS "Configuring for macOS")
    # macOS-specific options can go here
elseif(UNIX)
    message(STATUS "Configuring for Linux/Unix")
    # Linux-specific options can go here
endif()

# Optional features
option(ETYPE_GUI "Enable GUI support" OFF)
option(ETYPE_TESTS "Build tests" ON)

# Add source and test directories
add_subdirectory(src)

if(ETYPE_TESTS)
    add_subdirectory(tests)
endif()

# Install rules (for binaries, resources, etc.)
install(TARGETS etype DESTINATION bin)
install(DIRECTORY resources/ DESTINATION share/E-Type/resources)

# Packaging (optional, for future use)
include(GNUInstallDirs)

# Print summary
message(STATUS "E-Type configuration summary:")
message(STATUS "  Platform: ${CMAKE_SYSTEM_NAME}")
message(STATUS "  C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "  GUI enabled: ${ETYPE_GUI}")
message(STATUS "  Tests enabled: ${ETYPE_TESTS}")