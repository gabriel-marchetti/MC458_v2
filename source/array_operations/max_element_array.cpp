#include "max_element_array.h"

/*
 * INPUTS:
 *              arr: array that we are searching max element.
 * OUTPUTS:
 *              current_max: greatest element in array or INT_MIN.
 * 
 * OBS:
 * LOOP-INVARIANT:
 * Initialization)  A array with no element has no max element, then add -INF as current max
 *                  since will not affected other iterations.
 * Maintanence)     max holds the max element between A[0] upto A[i-1].
 *                  making max = Maximum(max, A[i]) = Maximum(A[0], A[1], ..., A[i])
 *                  At the end of iteration we will have max <- max between A[0] upto A[i] 
 * Termination)     Since we iterate through 0 upto n-1, then we will check every element.
 */
int max_element_array(const std::vector<int> &arr)
{
    if(arr.size() < 1)
    {
        return INT_MIN;
    }

    int current_max{INT_MIN};
    for(auto elem : arr)
    {
        current_max = std::max(current_max, elem);
    }

    return current_max;
}
