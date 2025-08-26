/*
WAPC to input two numbers and swap them without using a third variable.
*/
#include<stdio.h>


int main()
{
    int num1, num2;
    printf("\nEnter any two values: ");
    scanf("%d %d", &num1, &num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nThe two numbers have been swapped without third variable: %d %d", num1, num2);
    return 0;
}
