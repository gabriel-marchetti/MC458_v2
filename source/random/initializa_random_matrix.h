#pragma once
#include <vector>
#include <random>
#define Matrix std::vector<std::vector<int>>

Matrix initialize_random_matrix(int nRows, int nCols, int min = -5, int max = 5);