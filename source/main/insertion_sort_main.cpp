#include "insertion_sort.h"
#include "initialize_random_array.h"
#include "print_array.h"

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> arr = initialize_random_array(10);
    std::cout << "Initial Array: ";
    print_array(arr);

    insertion_sort(arr);

    std::cout << "Final Array: ";
    print_array(arr);

    std::cout << "----------------------------------------" << '\n';
    std::cout << "TESTING insertion_sort_recursive" << '\n';

    std::vector<int> arr2 = initialize_random_array(10);
    std::cout << "Initial Array: ";
    print_array(arr2);

    insertion_sort_recursive(arr2, arr2.size());

    std::cout << "Final Array: ";
    print_array(arr2);


    return 0;
}