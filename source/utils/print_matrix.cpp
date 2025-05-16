#include "print_matrix.h"

void print_matrix(const Matrix& matrix)
{
    for(int i{0}; i < matrix.size(); i++)
    {
        for(int j{0}; j < matrix[0].size(); j++)
        {
            std::cout << std::setw(3) << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}