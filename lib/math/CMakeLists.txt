add_library(math STATIC math.c)

include_directories(${GLOB_INCLUDE_PATH})

target_link_libraries(math -lgsl)
target_link_libraries(math -L${GLOB_LIB_PATH})
