#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &a,&b);
    printf("Equivalent 12-hour time: ");
    if(a<12){
        printf("%d:%d AM\n",a,b);
    }
    else{
        printf("%d:%d PM\n",a-12,b);
    }
}