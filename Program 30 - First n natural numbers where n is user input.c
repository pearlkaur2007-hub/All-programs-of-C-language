/******************************************************************************
WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
*******************************************************************************/
#include<stdio.h>

int main()
{
    unsigned int num; int i;
    printf("\nEnter a natural number: ");
    scanf("%d", &num);
    for(i=num;i>0;--i)
    {
        printf("\n %d", i);
    }
    return 0;
}
