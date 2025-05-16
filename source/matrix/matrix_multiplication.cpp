#include "matrix_multiplication.h"
#include <iostream>
#define Matrix std::vector<std::vector<int>>

void matrix_multiplication(Matrix& A, Matrix& B, Matrix& C, int n)
{
    int aRows{0}, aCols{0}, bRows{0}, bCols{0};    
    aRows = A.size();
    aCols = A[0].size();
    bRows = B.size();
    bCols = B[0].size();

    // We are performing C = A @ B
    if(aCols != bRows)
    {
        std::cout << "Invalid Entries" << std::endl;
        std::cout << "aCols != bRows" << std::endl;
        exit(EXIT_FAILURE);
    }
    C.resize(aRows, std::vector<int>(bCols, 0));

    for(int i{0}; i < aRows; i++)
    {
        for(int j{0}; j < bCols; j++)
        {
            for(int k{0}; k < aCols; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

/*
 * Only works when the size of the problem is a power of two, i.e., n = 2^k for
 * some k.
 */
//void matrix_multiplication_recursive(Matrix& A, Matrix& B, Matrix& C, int n)
//{
//    if(n == 1)
//    {
//        C[0][0] += A[0][0] * B[0][0];
//        return;
//    }
//    C.resize(n, std::vector<int>(n, 0));
//
//    Matrix A_11, A_12, A_21, A_22;
//    Matrix B_11, B_12, B_21, B_22;
//    A_11.resize(n/2, std::vector<int>(n/2));
//    A_12.resize(n/2, std::vector<int>(n/2));
//    A_21.resize(n/2, std::vector<int>(n/2));
//    A_22.resize(n/2, std::vector<int>(n/2));
//    B_11.resize(n/2, std::vector<int>(n/2));
//    B_12.resize(n/2, std::vector<int>(n/2));
//    B_21.resize(n/2, std::vector<int>(n/2));
//    B_22.resize(n/2, std::vector<int>(n/2));
//
//    int offset = n/2;
//    for(int i{0}; i < n/2; i++)
//    {
//        for(int j{0}; j < n/2; j++)
//        {
//            // Copy entries for A
//            A_11[i][j] = A[i][j];
//            A_12[i][j] = A[i][j+offset];
//            A_21[i][j] = A[i+offset][j];
//            A_22[i][j] = A[i+offset][j+offset];
//            // Copy entries for B
//            B_11[i][j] = B[i][j];
//            B_12[i][j] = B[i][j+offset];
//            B_21[i][j] = B[i+offset][j];
//            B_22[i][j] = B[i+offset][j+offset];
//        }
//    }
//}