#include <stdio.h>

int main(void)
{
    int prefix, group_identifier, publisher_code, item_number, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("prefix %d\n", prefix);
    printf("group_identifier %d\n", group_identifier);
    printf("publisher_code: %d\n", publisher_code);
    printf("item_number: %d\n", item_number);
    printf("check_digit: %d\n", check_digit);
}