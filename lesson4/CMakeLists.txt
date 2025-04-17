cmake_minimum_required(VERSION 3.26)
project(lesson4)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         11.0.2
)

FetchContent_MakeAvailable(fmt)

include_directories(.)

add_executable(lesson4
        main.cpp
)

target_link_libraries(lesson4 fmt)