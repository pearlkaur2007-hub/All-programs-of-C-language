/*
WAPC to find the simple interest based on user inputs.
*/
#include<stdio.h>
int main()
{
    int rate, principle, timee; float simpleInterest;
    printf("\nEnter the values of rate, principle, time (in years): ");
    scanf("%d %d %d", &rate, &principle, &timee);
    simpleInterest = (rate*principle*timee)/100;
    printf("\nThe simple interest is: %f", simpleInterest);
    return 0;
}
