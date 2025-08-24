// Formats user provided information into a table

#include <stdio.h>

int main(void)
{
    int item_num;
    float unit_price;
    int purch_day = -1;
    int purch_month = -1;
    int purch_year = -1;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: $");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d / %d", &purch_month, &purch_day, &purch_year);


    printf("%-10s %-10s %-10s\n", "Item", "Unit",  "Purchase");
    printf("%-10s %-10s %-10s\n", "",     "Price", "Date");
    printf("%-10d $%-9.2f %d/%d/%d\n", item_num, unit_price, purch_month, purch_day, purch_year);
}
