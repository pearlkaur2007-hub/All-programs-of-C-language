/******************************************************************************
WAPC to input an integer array from the user. Sort the array in descending order 
using insertion sort technique.
*******************************************************************************/

#include <stdio.h>

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;++i)
    {
        int curr=arr[i],prev=i-1;
        while(prev>=0 && arr[prev]<curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    
}
int main()
{
    int n, i, j, k;
    printf("\nEnter the number of elements in an array: ");
    scanf("%d", &n);
    int arr[n];
    for(k=0; k<n; ++k)
    {
        printf("\nThe arr[%d] : ", k);
        scanf("%d", &arr[k]);
    }
    insertionSort(arr,n);
    for(k=0; k<n; ++k)
    {
        printf("%d\t", arr[k]);
    }
    return 0;
}