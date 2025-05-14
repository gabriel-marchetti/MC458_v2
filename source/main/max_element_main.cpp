#include "max_element_array.h"
#include "print_array.h"
#include "initialize_random_array.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr = initialize_random_array(10);    
    
    std::cout << "Array: ";
    print_array(arr);

    std::cout << "Max Element: " << max_element_array(arr);

    return 0;
}