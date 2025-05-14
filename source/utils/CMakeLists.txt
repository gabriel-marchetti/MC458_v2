add_library(
    gabriel_utils STATIC
    print_array.cpp
    array_utils.cpp
)

target_include_directories(gabriel_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})