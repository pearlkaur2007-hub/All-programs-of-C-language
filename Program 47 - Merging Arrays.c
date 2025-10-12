/******************************************************************************
WAPC to input two sorted integer arrays from the user. Merge these two arrays 
into a single sorted array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, t;
    printf("\nEnter the number of elements in arr1[]: ");
    scanf("%d", &n);
    printf("Enter the number of elements in arr2[]: ");
    scanf("%d", &t);
    int arr1[n], arr2[t], arr[n + t];
    printf("\nEnter elements of arr1 (sorted): ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter elements of arr2 (sorted): ");
    for (int j = 0; j < t; ++j)
    {
        scanf("%d", &arr2[j]);
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < t)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
	    k++;
	    i++;
        }
        else
        {
            arr[k] = arr2[j];
	    k++;
	    j++;
        }
    }
    while (i < n)
    {
        arr[k] = arr1[i];
	k++;
	i++;
    }
    while (j < t)
    {
        arr[k] = arr2[j];
	k++;
	j++;
    }
    printf("\nMerged Sorted Array: ");
    for (k = 0; k < n + t; ++k)
    {
        printf("%d\t", arr[k]);
    }
    return 0;
}