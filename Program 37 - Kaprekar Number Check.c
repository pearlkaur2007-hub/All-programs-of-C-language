/******************************************************************************
WAPC to input a positive integer. Check whether it is Kaprekar or not. 
Note: Kaprekar Number – A number whose square can be split into two parts that 
add up to the number itself. 
Example: 45² = 2025 → 20 + 25 = 45
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num, temp, c=0, sq, d, power=1, right, left;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);
    sq=num*num;
    temp=num;
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    printf("\n%d is number of digit/s of the number.", c);
   
     for (int i = 0; i < c; i++)
    {
        power *= 10;
    }   
    right=sq%power;
    left=sq/power;
    d=left+right;
    if(d == num)
    {
        printf("\nThe number %u is Kaprekar.", num);
    }
    else
    {
        printf("\nThe number %u is not Kaprekar.", num);
    }
    return 0;
}