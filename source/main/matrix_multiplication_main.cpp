#include "initializa_random_matrix.h"
#include "matrix_multiplication.h"
#include "print_matrix.h"
#include <iostream>
#include <vector>

#define Matrix std::vector<std::vector<int>>

int main()
{
    Matrix A = initialize_random_matrix(4, 4);
    Matrix B = initialize_random_matrix(4, 4);
    Matrix C;

    std::cout << "Matrix A: \n";
    print_matrix(A);
    std::cout << "Matrix B: \n";
    print_matrix(B);
    matrix_multiplication(A, B, C, 4);

    std::cout << "Matrix C: \n";
    print_matrix(C);
}