cmake_minimum_required(VERSION 3.26)
project(pjc26)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         11.0.2
)

FetchContent_MakeAvailable(fmt)

add_executable(pjc26 lesson3/generic.h)
#add_executable(pjc26 lesson2/iterator.cpp)
#
#add_executable(pjc26 lesson2/set.cpp fmt)
target_link_libraries(pjc26 fmt)


