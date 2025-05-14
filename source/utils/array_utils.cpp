#include "array_utils.h"

void swap(std::vector<int> &arr, int i, int j)
{
    if(i == j) return;

    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void merge(std::vector<int> &arr, int p, int q, int r)
{
    std::vector<int> A;
    std::vector<int> B;
    A.resize(q - p + 1);
    B.resize(r - q);

    int i{0}, j{0}, k{0};

    j = 0;
    for(i = p; i <= q; i++)
    {
        A[j] = arr[i];
        j++;
    }

    j = 0;
    for(i = q+1; i <= r; i++)
    {
        B[j] = arr[i];
        j++;
    }

    i = 0; j = 0; k = p;
    while( i < A.size() && j < B.size() )
    {
        if(A[i] < B[j])
        {
            arr[k] = A[i];
            i++;
            k++;
            continue;
        }
        
        arr[k] = B[j];
        j++;
        k++;
    }

    while( i < A.size() )
    {
        arr[k] = A[i];
        k++;
        i++;
    }
    
    while( j < B.size() )
    {
        arr[k] = B[j];
        k++;
        j++;
    }
}