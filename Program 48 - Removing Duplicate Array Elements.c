/******************************************************************************
WAPC to input an integer array from the user. Remove all duplicates and display 
the resultant array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("\nEnter the number of elements in arr[]: ");
    scanf("%d", &n);
    printf("\nEnter values for arr[]:");
    int arr[n];
    for(i=0;i<n;++i)
    {
        printf("\narr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;++k)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nNew Array:");
    for(i=0;i<n;++i)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}