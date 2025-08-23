// Calculates the remaining balance on a loan after the first 3 payments

#include <stdio.h>

int main(void)
{
    float balance, interest_rate, monthly_payment;

    printf("Enter amount of loan: $");
    scanf("%f", &balance);

    printf("Enter interest rate percentage: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: $");
    scanf("%f", &monthly_payment);

    double monthly_rate = (interest_rate / 100.0f) / 12.0f;

    balance = (balance - monthly_payment) + (balance * (monthly_rate)); 
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * (monthly_rate)); 
    printf("Balance remaining after second payment: $%.2f\n", balance);
    
    balance = (balance - monthly_payment) + (balance * (monthly_rate)); 
    printf("Balance remaining after third payment: $%.2f\n", balance);
}
