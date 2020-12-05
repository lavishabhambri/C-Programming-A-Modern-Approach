#include<stdio.h>
int main(){
    int mm, dd, yyyy;
    printf("Enter a date (mm/dd/yyyy)\n");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);
    printf("You entered the date %d\n",yyyy*10000 + mm* 100 + dd);
    return 0;
}