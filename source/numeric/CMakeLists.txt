add_library(
    gabriel_numeric
    STATIC
    binary_conv.cpp
    polinomial_calc_ineficiente.cpp
)

target_include_directories(gabriel_numeric PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})