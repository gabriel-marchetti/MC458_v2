add_library(
    gabriel_array_operations
    STATIC
    array_sum.cpp
    max_element_array.cpp
)

target_include_directories(gabriel_array_operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})