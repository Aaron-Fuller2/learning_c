#include <stdio.h>

int main(void) 
{
    float loan_amount, interest_rate, monthly_payment;
    float first_month, second_month, third_month;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate (as decimal, e.g. 0.05): ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    first_month = (loan_amount + loan_amount * interest_rate) - monthly_payment;
    second_month = (first_month + first_month * interest_rate) - monthly_payment;
    third_month = (second_month + second_month * interest_rate) - monthly_payment;

    printf("Balance after first payment: %f\n", first_month);
    printf("Balance after second payment: %f\n", second_month);
    printf("Balance after third payment: %f\n", third_month);

    return 0;
}
