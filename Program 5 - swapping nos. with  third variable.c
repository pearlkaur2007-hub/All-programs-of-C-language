/*
WAPC to input two integers and display the contents after swapping.
*/
#include<stdio.h>


int main()
{
    int num1, num2, thirdvariable;
    printf("\nEnter any two values: ");
    scanf("%d %d", &num1, &num2);
    thirdvariable=num2;
    num2=num1;
    num1=thirdvariable;
    printf("\nThe two numbers have been swapped with third variable: %d %d", num1, num2);
    return 0;
}
