#include "array_sum.h"
#include "print_array.h"
#include "initialize_random_array.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = initialize_random_vector(10);

    std::cout << "Array: ";
    print_vector(vec);

    std::cout << "Sum: " << sum_array(vec) << '\n';

    return 0;
}