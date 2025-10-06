/******************************************************************************
WAPC to input a positive integer. Check whether the number is abundant or not. 
Abundant Number – A number for which the sum of proper divisors is greater than 
the number. Example: 12 → 1+2+3+4+6=16 > 12
*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    unsigned int num, temp, i, sum=0;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);

    temp = num;
    for(i=1;i!=num;++i)
    {
       if(temp%i==0)
       {
           sum+=i;
       }
    }

    if (sum>num)
    {
        printf("\nThe number %u is an Abundant number.", num);
    }
    else
    {
        printf("\nThe number %u is not an Abundant number.", num);
    }
    return 0;
}
