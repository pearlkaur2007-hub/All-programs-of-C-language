/*
WAPC to input the temperature in Celsius and output it in Fahrenheit.
*/
#include<stdio.h>


int main()
{
    float temp; float convertF;
    printf("\nEnter temperature in degree celsius: ");
    scanf("%f", &temp);
    convertF= (9*temp/5)+32;
    printf("\nTemperature in degree Fahrenheit: %f", convertF);
    return 0;
}
