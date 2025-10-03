/******************************************************************************
WAPC to input a positive integer. Check whether it is Automorphic or not. 
Note: A number whose square ends with the number itself is an Automorphic number. 
Example: 25² = 625 (ends with 25)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, temp, d=1, sq;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);
    temp=num;
    sq=num*num;
    while(temp>0)
    {
        temp/=10;
        d*=10;
    }
    if(sq%d==num)
    {
        printf("\nThe number %u is Automorphic.", num);
    }
    else
    {
        printf("\nThe number %u is not Automorphic.", num);
    }
    return 0;
}

