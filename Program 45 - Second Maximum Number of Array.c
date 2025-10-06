/******************************************************************************
WAPC to input an array of ‘n’ elements from the user. Find and display the second 
highest element of the array.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, max, sec_max;
    printf("\nEnter the number of elements in an array: ");
    scanf("%d", &n);
    int arr[n];
    if (n < 2) 
    {
        printf("Need at least 2 elements to find the second highest.\n");
        return 0;
    }
    for(i=0;i<n;++i)
    {
        printf("\nEnter the integer[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    sec_max=arr[1];
    for(i=0;i<n;++i)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        for(j=0;j<n;++j)
        {
            if(sec_max!=max && arr[j]<max && arr[j]>sec_max)
            {
                sec_max=arr[j];
            }
        }
        
    }
    printf("\nMaximum number in array: %d", max);
    printf("\nSecond Highest Number in the array is %d.", sec_max);
    return 0;
}
