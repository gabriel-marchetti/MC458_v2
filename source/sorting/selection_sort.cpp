#include "selection_sort.h"
#include "array_utils.h"

void selection_sort(std::vector<int> &arr)
{
    int n = arr.size();
    for(int i{0}; i < n; i++)
    {
        int cur_min = i;
        for(int j{i+1}; j < n; j++)
        {
            if(arr[cur_min] > arr[j])
            {
                cur_min = j;
            }
        }
        swap(arr, i, cur_min); 
    }
}