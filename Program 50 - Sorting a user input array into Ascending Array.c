/******************************************************************************
WAPC to input an integer array from the user. Sort the array in ascending order 
using selection sort technique.
*******************************************************************************/

#include <stdio.h>

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
            
        }
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
    bubbleSort(arr,n);
    for(k=0; k<n; ++k)
    {
        printf("\nElement [%d]= %d", k, arr[k]);
    }
    return 0;
}