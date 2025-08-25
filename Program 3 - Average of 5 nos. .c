/*
WAPC to input five integers from the user. Calculate and print the average.
*/
#include<stdio.h>


int main()
{
    int num1, num2, num3, num4, num5; float average;
    printf("\nEnter any 5 integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    average = (num1+ num2+ num3+ num4+ num5)/5;
    printf("\nThe average of the 5 integers are: %f", average);
    return 0;
}
