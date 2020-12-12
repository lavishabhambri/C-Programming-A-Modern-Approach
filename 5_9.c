#include<stdio.h>
int main(){
    int dd1,dd2,mm1,mm2,yyyy1,yyyy2;
    printf("Enter first date: ");
    scanf("%d/%d/%d",&dd1,&mm1,&yyyy1);
    printf("Enter second date: ");
    scanf("%d/%d/%d",&dd2,&mm2,&yyyy2);
    if(yyyy2<yyyy1){
        printf("%d/%d/%d is earlier than %d/%d/%d",dd2,mm2,yyyy2,dd1,mm1,yyyy1);
    }else if(yyyy2>yyyy1){
        printf("%d/%d/%d is earlier than %d/%d/%d",dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    }else{
        if(mm1<mm2){
            printf("%d/%d/%d is earlier than %d/%d/%d",dd1,mm1,yyyy1,dd2,mm2,yyyy2);
        }else if(mm1>mm2){
            printf("%d/%d/%d is earlier than %d/%d/%d",dd2,mm2,yyyy2,dd1,mm1,yyyy1);
        }
        else{
            if(dd1<dd2){
                printf("%d/%d/%d is earlier than %d/%d/%d",dd1,mm1,yyyy1,dd2,mm2,yyyy2);
            }else if(dd1>dd2){
                printf("%d/%d/%d is earlier than %d/%d/%d",mm2,dd2,yyyy2,dd1,mm1,yyyy1);
            }else{
                printf("%d/%d/%d and %d/%d/%d are equal.",dd2,mm2,yyyy2,dd1,mm1,yyyy1);
            }
        }
    }
    printf("\n");
}