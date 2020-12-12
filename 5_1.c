#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>=0 && n<=9){
        printf("The number %d has 1 digit.\n",n);
    }
    //2-digits
    if(n>=10 && n<=99){
        printf("The number %d has 2 digits.\n",n);
    }
    //3-digits
    if(n>=100 && n<=999){
        printf("The number %d has 3 digits.\n",n);
    }
    //4-digits
    if(n>=1000 && n<=9999){
        printf("The number %d has 4 digits.\n",n);
    }
}