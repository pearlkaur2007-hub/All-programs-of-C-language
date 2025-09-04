/******************************************************************************

WAPC to check if a triangle is valid or not. If it is valid, check and print if it is isosceles, scalene or equilateral.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    printf("\nEnter the angles of the triangle in degrees: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if(angle1+angle2+angle3 == 180)
    {
        printf("\nIt is a valid triangle.");
        if(angle1==angle2 && angle2==angle3)
        {
            printf("\nIt is an equilateral triangle.");
        }
        else if(angle1 == angle2 || angle2 == angle3 || angle1 == angle3 )
        {
            printf("\nIt is an isosceles triangle.");
        }
        else
        {
            printf("\nIt is a scalene triangle.");
        }
    }
    else
    {
        printf("\nIt is an invalid triangle.");
    }
    return 0;
}