/******************************************************************************
 
 WAPC to input two number. Check if either of the two inputs is positive.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>=0 || num2>=0)
    {
        printf("\nEither one number is positive.");
    }
    else
    {
        printf("\nNeither number is positive.");
    }
    return 0;
}
