/******************************************************************************
 
WAPC to input marks in three subjects. If the average mark is at least 60 or 
the marks in one or more subjects is at least 80, display the message, "Good result".

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int sub1, sub2, sub3; float average;
    printf("\nEnter marks in three subjects: ");
    scanf("%u %u %u", &sub1, &sub2, &sub3);
    average = (sub1+sub2+sub3)/3;
    if(average>=60 || sub1>=80 || sub2>=80 || sub3>=80)
    {
        printf("\nGood Result!");
    }
    return 0;
}
