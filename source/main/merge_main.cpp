#include "array_utils.h"
#include "print_array.h"

#include <iostream>

int main()
{
    std::vector<int> arr =
    {1, 3, 5, 7, 2, 4, 6, 8};

    std::cout << "Initial Array: ";
    print_array(arr);

    merge(arr, 0, 3, 7);

    std::cout << "Final Array: ";
    print_array(arr);

    std::vector<int> arr2 =
    {6, 4, 2, 1, 3, 5, 7, 2, 4, 6, 8};

    std::cout << "Initial Array: ";
    print_array(arr2);

    merge(arr2, 3, 6, 10);

    std::cout << "Final Array: ";
    print_array(arr2);

    return 0;
}