#include<stdio.h>
int main(){
    float shares, price, commission, value, rv_commission;
    printf("Enter the number of shares: ");
    printf("Enter the price per share: ");
    scanf("%f", &shares);
    scanf("%f",&price);
    
    value = shares * price;

    /* Original broker's commission */
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("\nOriginal broker's commission: $%.2f\n", commission);

    if (shares < 2000.00f)  
        rv_commission = 33.00f + shares * .03f;
     else
        rv_commission = 33.00f + shares * .02f;

    printf("Rival broker's commission: $%.2f\n\n", rv_commission);

    return 0;
}