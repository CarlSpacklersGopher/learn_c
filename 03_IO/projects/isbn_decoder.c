// Decodes an ISBN

#include <stdio.h>

int main(void)
{
    int gs1_prefix, group_id, publisher, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group Identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d\n", check_digit);
}
