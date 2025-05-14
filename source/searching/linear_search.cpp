#include "linear_search.h"

/*
 * INPUTS:
 *          target: value that we are seeking.
 *          A:      array evaluated.
 * OUTPUTS:
 *          If target found then return first index such that A[i] == target.
 *          Otherwise return -1.
 * OBS:
 * LOOP-INVARIANT CONDITION:
 * Predicate
 * P(i) : For all k in [1, i) we have that A[k] not equal Target. 
 * 
 * INITIALIZATION) P(1) True due to emptyness of For all k in [1, 1).
 * MAINTENANCE) Assume that at the start of the iteration, P(i - 1) is TRUE,
 *              so we have that A[1:i-1] are all different from TARGET. If 
 *              A[i] is different from TARGET is is also TRUE for P(i). Otherwise
 *              A[i] is equal to TARGET, then we return it. Note that the loop terminates
 *              then we don't break the Loop-Invariant
 * TERMINATION) If the algorithm does not find k such that A[k] == TARGET, then no element
 *              in the array is equal to TARGET and returns NIL(-1). If it finds under the loop
 *              it terminates as well.
 */
int linear_search(int target, std::vector<int> &arr)
{
    for(int i{0}; i < arr.size(); i++)
    {
        if(arr[i] == target)
            return i;
    }

    return -1;
}