/*
WAPC to input the coordinates of two points (x1, y1) and (x2, y2). 
Calculate the slope and display the same.
*/
#include<stdio.h>


int main()
{
    int x1, y1, x2, y2; float slope;
    printf("\nEnter value of x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    slope = (float)(y2-y1)/(x2-x1);
    printf("\nThe slope of the two points are: %f", slope);
    return 0;
}
