// Converts a phone number between formats

#include <stdio.h>

int main(void)
{
    int area_code, first3, last4;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d -%d", &area_code, &first3, &last4);

    printf("%.3d.%.3d.%.4d\n", area_code, first3, last4);

}
