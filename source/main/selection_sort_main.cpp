#include "selection_sort.h"
#include "initialize_random_array.h"
#include "print_array.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr = initialize_random_array(10);
    std::cout << "Initial Array: ";
    print_array(arr);

    selection_sort(arr);
    std::cout << "Final Array: ";
    print_array(arr);

    return 0;
}