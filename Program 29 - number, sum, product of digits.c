/******************************************************************************
WAPC to input a positive integer from the user. Find and display the number 
of digits in the number, sum of the digits of the number and product of the digits of the number.
*******************************************************************************/
#include<stdio.h>

int main()
{
    unsigned int num; int digits, temp, i; int sum=0, prod=1; int c=0;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);
    temp=num;
    for(i=10;temp>0;)
    {
        digits=temp%i;
        c++;
        temp/=i;
        sum+=digits;
        prod*=digits;
        printf("\n%d", digits);
    }
    printf("\n sum=%d", sum);
    printf("\n prod=%d", prod);
    printf("\n No. of digits of the number is %d", c);
    return 0;
}
