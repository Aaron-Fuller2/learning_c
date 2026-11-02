//Modify Programming Project 7 from Chapter 2 so that it includes the following function:
//      void pay amount (int dollars, int *twenties, int *tens, int *fives, int *ones) 

/************************************************************************************************ 
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and Sl bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 6

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
integer values throughout, not floating-point numbers
**************************************************************************************************/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);


int main(void)
{
    int dollars, twenties, tens, fives, ones;

    printf("Enter USD amount: $");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars / 1;
    dollars -= *ones * 1;
}