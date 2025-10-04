/******************************************************************************
WAPC to input a positive integer. Check whether it is Niven or not. 
Note: Niven number – A number divisible by the sum of its digits. 
Example: 18 ÷ (1+8) = 2

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num, temp, digit, c=0, sum=0;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);
    temp=num;
    while(temp>0)
    {
        c++;
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    printf("\n%d is number of digit/s of the number.", c);
   
    if(num%sum==0)
    {
        printf("\nThe number %u is Niven.", num);
    }
    else
    {
        printf("\nThe number %u is not Niven.", num);
    }
    return 0;
}