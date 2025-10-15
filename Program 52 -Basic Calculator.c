/******************************************************************************
With the help of 4 user-defined functions, design a basic calculator capable of 
addition, subtraction, multiplication and division.
*******************************************************************************/
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divn(int a, int b)
{
    return a / b;
}
int main() 
{
    int choose, a, b;
    printf("Choose operation:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choose);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    switch (choose)
    {
        case 1:
            printf("Result = %d\n", add(a, b));
            break;
        case 2:
            printf("Result = %d\n", sub(a, b));
            break;
        case 3:
            printf("Result = %d\n", mul(a, b));
            break;
        case 4:
            if (b != 0)
            {
                printf("Result = %d\n", divn(a, b));
            }
            else
            {
                printf("Error: Division by zero not allowed!\n");
                break;
            }
        default:
        {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
