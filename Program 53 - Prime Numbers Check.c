/******************************************************************************
WAPC to display prime numbers within a range entered by the user.
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num1, num2, i, j;
    printf("\nEnter starting number of range: ");
    scanf("%u", &num1);
    printf("\nEnter ending number of range: ");
    scanf("%u", &num2);
    if(num1>num2)
    {
        return 0;
    }
    
    for(i=num1;i<=num2;i++)
    {   
        int c=0;
        if(i==1)
        {
            continue;
        }
        for(j=2; j<i;++j)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%u\n", i);
        }
    }
    return 0;
}
