add_library(
    gabriel_matrix
    STATIC
    matrix_multiplication.cpp
)

target_include_directories(gabriel_matrix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})