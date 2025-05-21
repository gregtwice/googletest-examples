#
# CMakeLists.txt
#
# Copyright (C) 2018 Kano Computing Ltd.
# License: http://www.gnu.org/licenses/gpl-2.0.txt GNU GPLv2
#
# Build file for the tests
#



set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

# Build the Google Test library
# add_subdirectory(vendor)

add_executable(
	tests

	src/test_singleton_user.cpp
)
add_test(NAME check COMMAND tests)

target_include_directories (
    tests
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
    ${CMAKE_CURRENT_SOURCE_DIR}/../inc
)


find_package(GTest CONFIG REQUIRED)
# Link against Google Test library
target_link_libraries(tests PRIVATE gtest gtest_main gmock gmock_main pthread)
