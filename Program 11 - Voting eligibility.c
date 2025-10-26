/******************************************************************************
WAPC to input the age of a person. Check and display if the person is eligible to vote.
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int age; 
    printf("\nEnter your age: ");
    scanf( "%u", &age);
    if(age<18)
    {
        printf("\nYou are not eligible to vote. ");
    }
    else
    {
        printf("\nYou are eligible to vote. ");
    }
    return 0;
}
