#include "polinomial_calc_ineficiente.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<double> coefs =
    {0, 1, -2, 3, -4, 8};

    std::cout << "x = 0: ";
    std::cout << compute_pol_i(0, coefs.size(), coefs);
    std::cout << '\n';

    std::cout << "x = 1:";
    std::cout << compute_pol_i(1, coefs.size(), coefs);
    std::cout << '\n';

    std::cout << "x = -1:";
    std::cout << compute_pol_i(-1, coefs.size(), coefs);
    std::cout << '\n';

    return 0;
}