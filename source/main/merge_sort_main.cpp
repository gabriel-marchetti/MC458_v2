#include "merge_sort.h"
#include "initialize_random_array.h"
#include "print_array.h"

#include <iostream>

int main()
{
    std::vector<int> arr = initialize_random_array(10);
    std::cout << "Initial Array: ";
    print_array(arr);

    merge_sort(arr, 0, arr.size() - 1);

    std::cout << "Final Array: ";
    print_array(arr);

    return 0;
}