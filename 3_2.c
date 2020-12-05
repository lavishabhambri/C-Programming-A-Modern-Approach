#include<stdio.h>
int main(){
    int num, mm,dd,yyyy;
    float price;
    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy);
    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%.2d/%.2d/%d\n\n", num,price, mm,dd,yyyy);
    return 0;
}