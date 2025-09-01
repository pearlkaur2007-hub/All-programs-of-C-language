/******************************************************************************

WAPC to input a number. If it is positive, check if the number is odd or even.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if(num>=0)
    {
        if(num % 2 == 0)
        {
            printf("%d is an even positive number.", num);
        }
        else
        {
            printf("%d is an odd positive number.", num);
        }
    }
    else
    {
        printf("%d is a negative number.", num);
    }
    return 0;
}
