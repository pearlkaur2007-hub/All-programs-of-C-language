/******************************************************************************
WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first 
‘n’ even numbers separately. Here, ‘n’ is the user input.
*******************************************************************************/
#include<stdio.h>

int main()
{
    unsigned int num; int i, sum=0, sum1=0;
    printf("\nEnter a number: ");
    scanf("%u", &num);
    for(i=1;i<=num;i+=2)
    {
        sum+=i;
    }
    printf("\n Sum of odd numbers = %u", sum);
    for(i=2;i<=num;i+=2)
    {
        sum1+=i;
    }
    printf("\n Sum of even numbers = %u", sum1);
    return 0;
}

