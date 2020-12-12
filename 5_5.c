#include<stdio.h>
int main(){
    float n;
    printf("Enter the amount of taxable income: ");
    scanf("%f",&n);
    if(n<750.00f){
        printf("%.2f\n", n* 0.01);
    }
    else if(n<2250.00f){
        printf("%.2f\n", 7.50f + ((n-750.00f)* 0.02));
    }
    else if(n<3750.00f){
        printf("%.2f\n", 37.50f + ((n-2250.00f)* 0.03));
    }
    else if(n<5250.00f){
        printf("%.2f\n", 82.50+ ((n-3750.00)* 0.04));
    }
    else if(n<7000.00){
        printf("%.2f\n", 142.50+ ((n-5250.00)* 0.05));
    }
    else{
        printf("%.2f\n", 230.00f+ ((n-7000.00)*0.06));
    }
    return 0;

}