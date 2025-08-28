/******************************************************************************
WAPC to find the gender ratio based on the number of males and number of females entered as inputs.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int male, female; float ratio;
    printf("\nEnter number of males and females: ");
    scanf( "%d %d", &male, &female);
    ratio = (float) male/female;
    printf("\n The gender ratio is (male/female): %.4f", ratio);

    return 0;
}