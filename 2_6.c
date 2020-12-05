#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x = ");
    scanf("%d", &x);
    printf("Value = %d\n",((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}