/******************************************************************************

WAPC to input a year. Check and print if it is a leap year or not.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);
    if(year%100 == 0)
    {
        if(year%400==0)
        {
            printf("\nIt is a century leap year");
        }
        else
        {
            printf("\nIt is not a century leap year");
        }
    }
    else
    {
        if(year%4 == 0)
        {
            printf("\nIt is a leap year");
        }
        else
        {
            printf("\nIt is not a leap year");
        }
    }
    return 0;
}
