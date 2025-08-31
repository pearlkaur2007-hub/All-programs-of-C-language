/******************************************************************************

WAPC to input three unique integers. Find the maximum value.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter three unique integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && b>c)
    {
        printf("\nThe number with maximum value is %d", a);
    }
    else if(b>a && a>c)
    {
        printf("\nThe number with maximum value is %d", b);
    }
    else
    {
        printf("\nThe number with maximum value is %d", c);
    }
    return 0;
}
