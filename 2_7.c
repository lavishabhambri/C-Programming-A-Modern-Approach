#include<stdio.h>
int main(){
    int x;
    printf("Enter a dollar amount : ");
    scanf("%d",&x);
    int value = x/20;
    x=x%20;
    printf("$20 bills: %d\n", value);
    value = x/10;
    x=x%10;
    printf("$10 bills: %d\n", value);
    value = x/5;
    x=x%5;
    printf(" $5 bills: %d\n", value);
    value = x/1;
    printf(" $1 bills: %d\n", value);
    return 0;
}