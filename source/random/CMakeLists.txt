add_library(
    gabriel_random
    STATIC
    initialize_random_array.cpp
    initialize_random_matrix.cpp
)

target_include_directories(gabriel_random PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})