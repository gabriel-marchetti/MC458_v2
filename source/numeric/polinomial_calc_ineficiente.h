#pragma once
#include <vector>
#include <utility>

double compute_pol_i(double x, int n, std::vector<double> &coefs);
std::pair<double, double> compute_pol(double x, int n, std::vector<double> &coefs);