#include "binary_conv.h"
#include "print_array.h"
#include <iostream>

int main()
{
    std::vector<char> bin = conv_to_bin(10);
    std::cout << "10 : ";
    print_array(bin);

    bin = conv_to_bin(100);
    std::cout << "100 : ";
    print_array(bin);
    
    bin = conv_to_bin(127);
    std::cout << "127 : ";
    print_array(bin);

    return 0;
}