/******************************************************************************
WAPC to input an integer array from the user. Display the frequency of every 
element in the array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("\nEnter the number of elements in arr[]: ");
    scanf("%d", &n);
    printf("\nEnter values for arr[]:");
    int arr[n], freq[n];
    for(i=0;i<n;++i)
    {
        printf("\narr[%d]=", i);
        scanf("%d", &arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;++i)
    {
        int count=1;
        if(freq[i]!=0)
        {
            for(j=i+1;j<n;++j)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    freq[j]=0;
                }
            }
        freq[i]=count;
        }
    }
    printf("\nFrequency: ");
    for(i=0;i<n;++i)
    {
        if(freq[i]!=0)
        {
            printf("arr[%d](%d) : %d\n", i, arr[i], freq[i]);
        }
    }
    return 0;
}