#
# CMakeLists.txt
#
# Copyright (C) 2018 Kano Computing Ltd.
# License: http://www.gnu.org/licenses/gpl-2.0.txt GNU GPLv2
#
# Build file for googletest-sample project
#


cmake_minimum_required (VERSION 3.11)

set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
	sample
)

target_include_directories (
    sample
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

# Uncomment for tests
include(CTest)
enable_testing()

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory (tests)
endif()
