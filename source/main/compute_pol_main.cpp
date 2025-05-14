#include "polinomial_calc_ineficiente.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> coefs = {0, 1, -2, 3, -4, 8};
    
    std::cout << "x = 0: ";
    std::cout << compute_pol(0, coefs.size(), coefs).first;
    std::cout << '\n';

    std::cout << "x = 1: ";
    std::cout << compute_pol(1, coefs.size(), coefs).first;
    std::cout << '\n';

    std::cout << "x = -1: ";
    std::cout << compute_pol(-1, coefs.size(), coefs).first;
    std::cout << '\n';

    return 0;
}