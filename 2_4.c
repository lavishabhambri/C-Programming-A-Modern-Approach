#include<stdio.h>
int main(){
    float d;
    printf("Enter an amount = ");
    scanf("%f", &d);
    printf("With tax Added = ");
    d+=5.0f;
    printf("$%.2f\n", d);
    return 0;
}