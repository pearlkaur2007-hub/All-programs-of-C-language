/******************************************************************************
WAPC to do the following:
Input: height (m), weight (kg).
Calculate BMI = weight / (height²).
Classify:
BMI < 18.5 → Underweight
18.5 ≤ BMI < 25 → Normal
25 ≤ BMI < 30 → Overweight
≥ 30 → Obese
If overweight or obese and age > 40 → print "Consult doctor".
*******************************************************************************/
#include<stdio.h>

int main()
{
    float hght, wght; int age; float BMI;
    printf("\nEnter your height (in meters), weight (in kg) and age: ");
    scanf("%f %f %d", &hght, &wght, &age);
    BMI = (float) wght/(hght*hght);
    printf("%f", BMI);
    if(BMI>=30 && age>40)
    {
        printf("\nConsult Doctor");
    }
    else if(BMI<18.5 && age>0)
    {
        printf("\nUnderweight");
    }
    else if(BMI>=18.5 && BMI<25 && age>0)
    {
        printf("\nNormal");
    }
    else if(BMI>=25 && BMI<30 && age>0)
    {
        printf("\nOverweight");
    }
    return 0;
}