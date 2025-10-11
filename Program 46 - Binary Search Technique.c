/******************************************************************************
WAPC to initialize the array with 10 integers of your choice. Input an integer 
from the user. Check and display whether or not the input entered by the user is 
present in the array or not. Use the binary search technique (Hint: Make sure the 
array elements are sorted).
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, k, left=0, srch, mid, flag=0;
    int right=9;
    int arr[10]={4,6,8,25,36,154,254,356,862,1258};
    printf("\nEnter the value being searched: ");
    scanf("%d", &srch);
    while(left<=right)
    {
        mid=(left+right)/2;
        if(srch==arr[mid])
        {
            flag=1;
            break;
        }
        else if(srch>arr[mid])
        {
            left=mid+1;
        }
        else if(srch<arr[mid])
        {
            right=mid-1;
        }
    }
    if(flag==1)
    {
        printf("\nThe value is present in array.");
    }
    else
    {
        printf("\nThe value is not present in array.");
    }
    return 0;
}