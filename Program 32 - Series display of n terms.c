/******************************************************************************
WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. 
Here, ‘n’ is user input.
*******************************************************************************/
#include<stdio.h>

int main()
{
    unsigned int num, ser=1; int i=1;
    printf("\nEnter n which is the number of terms of a series: ");
    scanf("%u", &num);
    
    while
    (i<=num)
    {
        printf("%u ", ser);
        ser*=2;
        i<num;
        ++i;
    }
    return 0;
}

