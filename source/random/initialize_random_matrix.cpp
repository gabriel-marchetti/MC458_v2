#include "initializa_random_matrix.h"
#define Matrix std::vector<std::vector<int>>

Matrix initialize_random_matrix(int nRows, int nCols, int min, int max)
{
    Matrix matrix;
    matrix.resize(nRows, std::vector<int>(nCols, 0));

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    for(int i{0}; i < nRows; i++)
    {
        for(int j{0}; j < nCols; j++)
        {
            matrix[i][j] = dist(gen);
        }
    }

    return matrix;
}