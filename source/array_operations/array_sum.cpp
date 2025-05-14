#include "array_sum.h"

/*
 * INPUTS:
 *          arr: array that we want to sum all elements
 * OUTPUTS:
 *          sum: sum of elements of array 
 * 
 * LOOP-INVARIANT CONDITION: 
 * INITIALIZATION) If array is empty, then the sum of it's elements are zero 
 * MAINTENANCE) Since SUM holds the sum of values A[0] upto A[i-1], then adding A[i] to SUM
 *              is equivalent to saying that SUM holds the sum of values A[0] upto A[i]
 * TERMINATION) Since indice goes from 0 upto n-1 and each iteration we add A[indice] then SUM
 *              holds the sum of the array 
 */
int sum_array(const std::vector<int> &arr)
{
    int sum{0};
    
    for(auto elem : arr)
    {
        sum += elem;
    }

    return sum;
}