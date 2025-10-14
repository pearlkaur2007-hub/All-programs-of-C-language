/******************************************************************************

WAPC to input a positive integer. Assume that the number is of 3 digits. Check 
and print if the number is Armstrong or not. Note: An Armstrong number is a 
number that is equal to the sum of its own digits each raised to the power of 
the number of digits, for example, 153 = 1³ + 5³ + 3³.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num; int digit1, digit2, digit3, sum;
    printf("\nEnter a number: ");
    scanf("%u", &num);
    
    if(num/100!=0 && num<1000)
    {
        printf("\n%u is a three digit number", num);
        do
        {
            digit1=num%10;
            digit2=(num%100)/10;
            digit3=num/100;
            sum=(digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
            printf("\n%u", sum);
            if(sum==num)
            {
                printf("\n %u is an Armstrong number.", num);
            }
            else
            {
                printf("\n %u is not an Armstrong number.", num);
            }
        }while(digit3==0);
    }
    else
    {
        printf("\n%u is not a three digit number", num);
    }
    return 0;
}
