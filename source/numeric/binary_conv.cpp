#include "binary_conv.h"

std::vector<char> conv_to_bin(int n)
{
    std::vector<char> b;
    int t = n;
    while( t > 0 )
    {
        b.push_back(t % 2);
        t /= 2;
    }

    std::reverse(b.begin(), b.end());
    return b;
}