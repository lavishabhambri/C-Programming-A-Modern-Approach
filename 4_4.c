#include<stdio.h>
int power(int a, int b){
    int out=1;
    while(b!=0){
    out *= a;
    b--;
    }
    return out;
}

int main(){
    int n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&n);
    int output=0,d=0;
    L1:
    //printf("%d\n", n);
    if(n>0){
        int rem=n%8;
        output = output + rem*power(10, d);
        d++;
        n=n/8;
        goto L1; 
    }
    printf("In octal your number is: %d\n",output); 
    return 0;
}