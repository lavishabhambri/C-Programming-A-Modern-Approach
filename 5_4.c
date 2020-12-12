#include<stdio.h>
int main(){
    int n;
    printf("Enter the wind speed: ");
    scanf("%d",&n);
    if(n<1){
        printf("Calm\n");
    }
    else if(n>=1 && n<=3){
        printf("Light air\n");
    }
    else if(n>=4 && n<=27){
        printf("Breeze\n");
    }
    else if(n>=28 && n<=47){
        printf("Gaze\n");
    }
    else if(n>=48 && n<=63){
        printf("Storm\n");
    }
    else{
        printf("Above 63\n");
    }
}