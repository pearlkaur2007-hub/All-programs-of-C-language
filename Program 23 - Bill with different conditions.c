/******************************************************************************

WAPC to input the number of units of electricity consumed by a consumer. Calculate and print the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units.


*******************************************************************************/

#include <stdio.h>

int main()
{
    int amount; float bill;
    printf("\nEnter the number of units of electricity: ");
    scanf("%d", &amount);
    if(amount<=100)
    {
       bill = amount*2;
       printf("\nBill = %f",bill);
    }
    else if(amount <= 300)
    {
        bill = 100*2 + (amount - 100)*3;
        printf("\nBill = %f",bill);
    }
    else
    {
        bill = 100*2 + 200*3 + (amount-300)*4;
        bill = bill + 0.025*bill;
        printf("\nBill = %f",bill);
    }
    return 0;
}