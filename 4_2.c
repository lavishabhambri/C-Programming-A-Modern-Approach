#include<stdio.h>
int main(){
    int n;
    printf("Enter a two digit no.: ");
    scanf("%d", &n);
    printf("%d",n%10);
    n=n/10;
    printf("%d",n%10);
    n=n/10;
    printf("%d\n",n%10);
    return 0;
}
