/******************************************************************************

WAPC to input a positive integer. Check and print if the number is perfect or 
not. Note: Perfect number is a number which is equal to the sum of all its proper 
divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num; int i, sum=0;
    printf("\nEnter a number: ");
    scanf("%u", &num);
    for(i=1;i<num;++i)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    printf("\n Sum = %u", sum);
    if(sum==num)
    {
        printf("\n%u is a perfect number.", num);
    }
    else
    {
        printf("\n%u is not a perfect number.", num);
    }
    return 0;
}
