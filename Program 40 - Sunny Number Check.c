/******************************************************************************
WAPC to input a positive integer. Check whether the number is Sunny or not. 
Note: Sunny Number – A number for which the next number is a perfect square. 
Example: 8 (since 8+1=9 which is 3²)
*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    unsigned int num, temp, digit; double sqrtt;
    printf("\nEnter a positive integer: ");
    scanf("%u", &num);

    temp = num;
    temp+=1;
    sqrtt=sqrt(temp);

    if (sqrtt==(int)sqrtt)
    {
        printf("\nThe number %u is a Sunny number.", num);
    }
    else
    {
        printf("\nThe number %u is not a Sunny number.", num);
    }
    return 0;
}
