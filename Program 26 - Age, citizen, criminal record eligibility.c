/******************************************************************************
WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
If age ≥ 60, print "Senior Citizen Eligible".
If not eligible, specify why.
*******************************************************************************/
#include<stdio.h>

int main()
{
    int age; char ctzn, crim_rec;
    printf("\nEnter your age, Indian citizenship status (Y/N) and criminal record (Y/N): ");
    scanf("%d %c %c", &age, &ctzn, &crim_rec);
    if(age>=18 && age<60 && ctzn=='Y' && crim_rec=='N')
    {
        printf("\nEligible");
    }
    else if(age>=60 && ctzn=='Y' && crim_rec=='N')
    {
        printf("\nSenior Citizen Eligible");
    }
    else
    {
        if(ctzn=='N' && crim_rec=='Y' && age<18)
        {
            printf("\nNot Eligible since has a criminal record, not a citizen and less than 18.");
        }
        else if(ctzn=='N' && crim_rec=='Y')
        {
            printf("\nNot Eligible since has a criminal record and not a citizen");
        }
        else if(ctzn=='N' && age<18)
        {
            printf("\nNot Eligible since not a citizen and less than 18");
        }
        else if(crim_rec=='Y' && age<18)
        {
            printf("\nNot Eligible since has a criminal record and less than 18");
        }
        
    }
    return 0;
}