cmake_minimum_required(VERSION 3.22)

project(main LANGUAGES Swift C)

include_directories(include)

set(GLOB_INCLUDE_PATH "/opt/homebrew/include" CACHE INTERNAL "")
set(GLOB_LIB_PATH "/opt/homebrew/lib" CACHE INTERNAL "")

add_subdirectory(bin)
add_subdirectory(lib/math)
