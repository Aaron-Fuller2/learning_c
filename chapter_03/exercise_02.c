#include <stdio.h>

int main(void)
{
    float price;
    int item, month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item);
    
    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\tUniit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%-7d $%2.2f  %2d/%2d/%4d\n\n", item, price, month, day, year);

    
}