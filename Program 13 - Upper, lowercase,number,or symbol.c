/******************************************************************************
WAPC to input a character. Categorize it as either uppercase letter, 
lowercase letter, number or any other miscellaneous symbol.
*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch; int asciiValue;
    printf("\nEnter any charcter: ");
    scanf("%c", &ch);
    asciiValue = ch;
    if(asciiValue>=65 && asciiValue<=90)
    {
        printf("\n%c is an uppercase letter", ch);
    }
    else if(asciiValue>=97 && asciiValue<=122)
    {
        printf("\n%c is an lowercase letter", ch);
    }
    else if(asciiValue>=48 && asciiValue<=57)
    {
        printf("\n%c is a number", ch);
    }
    else
    {
        printf("\n%c is a symbol", ch);
    }
    return 0;
}
