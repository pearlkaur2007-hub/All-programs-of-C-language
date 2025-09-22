/******************************************************************************
WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".
*******************************************************************************/
#include<stdio.h>

int main()
{
    int date, month, year; int LeapYear=0; int ValidDate=0;
    printf("\nEnter Day, month, year (dd,mm,yyyy)");
    scanf("%d %d %d", &date, &month, &year);
    //Century Leap year or not
    if(year % 100 == 0)
    {
        if(year%400==0)
        {
            LeapYear=1;
        }
    }
    //Not a Century Leap Year or not
    else
    {
        if(year%4==0)
        {
            LeapYear==1;
        }
        else
        {
            LeapYear==0;
        }
    }
    switch(month)
	{
		case 1:
		printf("\nJanuary");
		break;
		case 2:
		printf("\nFebruary");
		break;
		case 3:
		printf("\nMarch");
		break;
        case 4:
		printf("\nApril");
		break;
		case 5:
		printf("\nMay");
		break;
		case 6:
		printf("\nJune");
		break;
		case 7:
		printf("\nJuly");
		break;
		case 8:
		printf("\nAugust");
		break;
		case 9:
		printf("\nSeptember"); 
		break;
		case 10:
		printf("\nOctober");
		break;
		case 11:
		printf("\nNovember");
		break;
		case 12:
		printf("\nDecember");
		break;
		default:
		printf("\nInvalid date");
		return 0;
    }
    
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        if(date<=31)
            printf("\nValid date");
        else
            printf("\nInvalid date");
    }
    else if(month==4||month==6||month==9||month==11)
    {
        if(date<=30)
            printf("\nValid date");
        else
            printf("\nInvalid date");
    }
    else if(month==2)
    {
        if(LeapYear==1&&date<=29)
        {
            printf("\nValid Date");
        }
        else if(LeapYear==0&&date<=28)
        {
            printf("\nValid Date");
        }
        else
        {
            printf("\nInvalid Date");
        }
    }
    return 0;
}

