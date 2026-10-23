#include <stdio.h>
int main()
{
    int choice;
    float balance, amount;
    printf("Enter current balance: ");
    scanf("%f", &balance);
    printf("\n1. Balance Inquiry");
    printf("\n2. Cash Withdrawal");
    printf("\n3. Cash Deposit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("\nCurrent balance: %f", balance);
            break;

        case 2:
            printf("\nEnter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance && amount > 0) 
            {
                balance -= amount;
                printf("\nTransaction successful");
                printf("\nRemaining balance: %f", balance);
            } else 
              {
                printf("\nInsufficient balance");
              }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0) 
            {
                balance += amount;
                printf("Deposit successful\n");
                printf("Updated balance: %.2f\n", balance);
            } else 
              {
                printf("Invalid deposit amount\n");
              }
            break;

        default:
            printf("\nInvalid option");
    }
}