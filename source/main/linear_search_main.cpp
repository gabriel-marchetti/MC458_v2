#include "linear_search.h"
#include "print_array.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr = 
    {1, 4, 6, -1, 7};

    std::cout << "Array: ";
    print_array(arr);

    int target = -1;
    std::cout << "Searching element:" << target << '\n';
    std::cout << "Index: " << linear_search(target, arr) << '\n';

    target = 50;
    std::cout << "Searching element: " << target << '\n';
    std::cout << "Index: " << linear_search(target, arr) << '\n';

    return 0;
}