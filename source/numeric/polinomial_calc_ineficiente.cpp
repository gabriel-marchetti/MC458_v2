#include "polinomial_calc_ineficiente.h"
#include <utility>


double compute_pol_i(double x, int n, std::vector<double> &coefs)
{
    if(n == 0) return coefs[0];

    double result{1};
    for(int i{0}; i < n; i++)
    {
        result *= x;
    }

    result = result * coefs[n] + compute_pol_i(x, n-1, coefs);
    return result;
}

/*
 * Fortificando a hipótese de indução de compute_pol. Supomos que temos como calcular
 * P_{n-1}(x) e x^{n-1} na chamada anterior.
 * 
 * std::pair.first : P_{n-1}(x)
 * std::pair.second : x^{n-1}
 */
std::pair<double, double> compute_pol(double x, int n, std::vector<double> &coefs)
{
    if(n == 0)
    {
        return std::pair<double, double>(coefs[0], x);
    }

    std::pair<double, double> tmp = compute_pol(x, n - 1, coefs);
    tmp.first += coefs[n] * tmp.second * x;
    tmp.second *= x;

    return tmp;
}