/******************************************************************************

WAPC to input a positive integer from the user. Check and print if the number is 
palindrome or not. Note: A palindrome number is a number that remains the same 
when its digits are reversed, for example, 121.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num; int rem, original, reversed=0;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    original=num;
    
    while(num!=0)
    {
        rem = num%10;
        reversed = reversed * 10 + rem;
        num /=10;
    }
    if(original==reversed)
    {
        printf("\n%d is a palindrome", original);
    }
    else
    {
        printf("\n%d is not a palindrome", original);
    }

    return 0;
}