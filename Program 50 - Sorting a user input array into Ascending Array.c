/******************************************************************************
WAPC to input an integer array from the user. Sort the array in ascending order 
using selection sort technique.
*******************************************************************************/

#include <stdio.h>

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        int smallIdx=i;
        for(int j=i+1; j<n; ++j)
        {
            if(arr[j]<arr[smallIdx])
            {
                smallIdx=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallIdx];
        arr[smallIdx] = temp;
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
    selectionSort(arr,n);
    for(k=0; k<n; ++k)
    {
        printf("%d\t", arr[k]);
    }
    return 0;
}
