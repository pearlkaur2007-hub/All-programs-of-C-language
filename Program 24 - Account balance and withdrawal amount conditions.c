/*******************************************************************************
WAPC to do the following:
Input: account balance, withdrawal amount.
Follow the given rules:
Withdrawal amount must be a multiple of 100.
Withdrawal must not exceed balance.
Maintain a minimum balance of Rs. 500 after withdrawal.
Output: Transaction success or failure with reason
*******************************************************************************/

#include<stdio.h>

int main()
{
    int account_balance; int withdrawal_amount;
    printf("\nEnter the account balance and withrawal amount:");
    scanf("%d %d", &account_balance, &withdrawal_amount);
    if(withdrawal_amount % 100 == 0 && withdrawal_amount <= account_balance)
    {
        account_balance = account_balance - withdrawal_amount;
        if (account_balance>=500)
        {
            printf("\nTransaction Success");
        
        }
        else{
            printf("\nTransaction failed due to insufficient balance" );
        }
    }
    else if (withdrawal_amount % 100 != 0)
    {
        printf("\nTransaction failed due to withdrawal amount not divisible by 100" );
    }
    else if (withdrawal_amount > account_balance)
    {
        printf("\nTransaction failed due to withdrawal amount > account balance" );
    }
    return 0;
}
