#include "insertion_sort.h"

/*
 * Inputs:
 *          arr: array that needs to be sorted
 * 
 * Sort array arr
 * 
 * Initialization) if arr.size() == 1, then it will not enter for loop
 * Maintenance) If A[0..n-1] is sorted, then placing A[n] in the place where
 * (---x <= A[n]---) A[n] (---x > A[n]---) will sort the array
 * This means that if A[0..n-1] is sorted, performing the action will make A[0..n] sorted. 
 * Termination) the i-th iteration sorts the array A[0..i-1], the loop ends when i = n so the
 * array A[0..n-1] is sorted
 * 
 * Space-Complexity: O(1)
 */
void insertion_sort(std::vector<int> &arr)
{
    int n = arr.size();
    for(int i{1}; i < n; i++)
    {
        int target = arr[i];
        int j = i - 1;
        while(arr[j] > target && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = target;
    }
}

/*
 * Recursive implementation of insertion_sort
 * Overall time performance must match the insertion_sort, but the stack
 * will have height of O(n)
 * 
 * Space-Complexity: O(n)
 */
void insertion_sort_recursive(std::vector<int> &arr, int n)
{
    if(n <= 0)
    {
        return;
    }

    insertion_sort_recursive(arr, n-1);
    int i = n - 1; // index of last element
    int target = arr[i];
    int j = i - 1;
    while(arr[j] > target && j >= 0)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = target;
}