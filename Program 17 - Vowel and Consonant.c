/******************************************************************************
 
 WAPC to a character in lowercase. Check and print if the character is a vowel or consonant.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char charr;
    printf("\nEnter a character in lowercase: ");
    scanf("%c", &charr);
    if(charr == 'a' || charr == 'e' || charr == 'i' || charr == 'o' || charr == 'u')
    {
        printf("\n%c is a vowel.", charr);
    }
    else
    {
        printf("\n%c is a consonant.", charr);
    }
    return 0;
}
