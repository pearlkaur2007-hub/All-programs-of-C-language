/******************************************************************************
WAPC to input an integer. Calculate and display the square and cube of the number.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, square, cube;
    printf("\nEnter an integer: ");
    scanf( "%d", &num1);
    square = num1*num1;
    cube = num1*num1*num1;
    printf("\n The square and cube of the number is: %d and %d", square, cube);

    return 0;
}