#include "print_array.h"

void print_array(const std::vector<int> &arr, char sep)
{
    for(auto elem : arr)
    {
        std::cout << elem << sep;
    }
    std::cout << '\n';
}

void print_array(const std::vector<char> &arr, char sep)
{
    for(auto elem : arr)
    {
        std::cout << (int) elem << sep;
    }
    std::cout << '\n';
}

void print_vector(const std::vector<int> &vect, char sep)
{
    print_array(vect, sep);
}