add_library(
    gabriel_searching STATIC
    linear_search.cpp
)

target_include_directories(gabriel_searching PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})