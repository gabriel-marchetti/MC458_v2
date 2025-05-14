#include <merge_sort.h>
#include "array_utils.h"

#include <vector>

void merge_sort(std::vector<int> &arr, int p, int r)
{
    if( p >= r ) return;

    int q = p + (r-p)/2;
    merge_sort(arr, p, q);
    merge_sort(arr, q + 1, r);

    merge(arr, p, q, r);
}