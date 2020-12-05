#include<stdio.h>
int main(){
    int gfi, group, code, num, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gfi, &group, &code, &num, &check_digit);
    printf("GSI prefix: %d\n",gfi);
    printf("Group identifier: %d\n",group);
    printf("Publisher code: %d\n",code);
    printf("Item number: %d\n",num);
    printf("Check digit: %d\n", check_digit);
    return 0;
}