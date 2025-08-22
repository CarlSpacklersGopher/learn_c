// Allows the user to enter an amount of money and prints the total including 5% tax.

#include <stdio.h>

#define TAX_PERCENT 5.0f

int main(void)
{
    float subtotal;

    printf("Enter an amount: ");
    scanf("%f", &subtotal);

    printf("With tax added: $%.2f\n", subtotal * (1 + (TAX_PERCENT / 100.0f)));

}
