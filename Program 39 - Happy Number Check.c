/******************************************************************************
WAPC to input a positive integer. Check whether it is Happy or not. 
Note: Happy Number – A number that eventually reaches 1 when replaced repeatedly 
by the sum of the squares of its digits.
Example: 19 → 1²+9²=82 → 8²+2²=68 → 6²+8²=100 … → 1
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num, temp, digit, sum_of_sq;

    printf("\nEnter a positive integer: ");
    scanf("%u", &num);

    temp = num;

    while (temp != 1 && temp != 4)
    {
        sum_of_sq = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum_of_sq += digit * digit;
            temp /= 10;
        }

        temp = sum_of_sq;
    }

    if (temp == 1)
    {
        printf("\nThe number %u is a Happy number.", num);
    }
    else
    {
        printf("\nThe number %u is not a Happy number.", num);
    }
    return 0;
}
