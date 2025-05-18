cmake_minimum_required(VERSION 3.14)
project(unit_test_example_gtest)

set(CMAKE_CXX_STANDARD 17)

# Для MSVC: GoogleTest будет собираться с динамическим рантаймом (/MD, /MDd)
if (MSVC)
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include_directories(include)

add_executable(runTests
    tests/test_queue.cpp
    tests/test_heap.cpp
    tests/test_binary_tree.cpp
)

target_link_libraries(runTests gtest gtest_main)