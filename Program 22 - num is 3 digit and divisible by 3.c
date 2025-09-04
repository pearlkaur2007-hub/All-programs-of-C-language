/******************************************************************************

WAPC to check if a number is of 3-digits and divisible by 3.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter any integer: ");
    scanf("%d", &num);
    if(num>99 && num<1000 )
    {
        if(num%3==0)
        {
            printf("\nIt is a 3-digit number divisible by 3.");
        }
        else
        {
            printf("\nIt is a 3-digit number but not divisible by 3.");
        }
    }
    else
    {
        printf("\nIt is not a 3-digit number.");
    }
    return 0;
}