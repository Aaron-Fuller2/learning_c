#include <stdio.h>

int main(void)
{
    float commission, number_shares, rival_commission, share_price, value;
    printf("Starting calculation\n\n");

    while (1 == 1)
    {
        printf("Enter number of shares: ");
        scanf("%f", &number_shares);

        if (number_shares == 0)
        {
            break;
        }
        
        printf("Enter price per share: ");
        scanf("%f", &share_price);

        value = number_shares * share_price;

        commission = (value < 2500.00f)   ? 30.00f  + .017f  * value:
                    (value < 6250.00f)   ? 56.00f  + .0066f * value:
                    (value < 20000.00f)  ? 76.00f  + .0034f * value:
                    (value < 50000.00f)  ? 100.00f + .0022f * value:
                    (value < 500000.00f) ? 155.00f + .0011f * value:
                                            255.00f + .0009f * value;

        commission = (commission < 39.00f) ? 39.00f : commission;

        rival_commission = (number_shares < 2000) ? 33 + (0.03f * number_shares): 
                                                    33 + (0.02f * number_shares);

        printf("Commission: $%.2f\n", commission);
        printf("Rival's Commission: $%.2f\n", rival_commission);
    }
    return 0;
}
