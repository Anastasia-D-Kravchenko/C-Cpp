cmake_minimum_required(VERSION 3.26)
project(lesson3)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         11.0.2
)

FetchContent_MakeAvailable(fmt)

include_directories(.)

add_executable(lesson3
    generic.cpp
)

target_link_libraries(lesson3 fmt)