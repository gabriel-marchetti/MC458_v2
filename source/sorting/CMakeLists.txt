add_library(
    gabriel_sorting
    STATIC
    insertion_sort.cpp
    selection_sort.cpp
    merge_sort.cpp
)

target_link_libraries(gabriel_sorting PRIVATE gabriel_utils)
target_include_directories(gabriel_sorting PRIVATE utils)

target_include_directories(gabriel_sorting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})