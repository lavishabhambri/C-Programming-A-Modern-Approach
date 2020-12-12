#include<stdio.h>
int main(){
    int n;
    printf("Enter numerical grade: ");
    scanf("%d",&n);
    if(n>100 || n<0){
        printf("Invalid marks");
    }else if(n>=90){
        printf("Letter grade: A");
    }else if(n>=80){
        printf("Letter grade: B");
    }else if(n>=70){
        printf("Letter grade: C");
    }else if(n>=60){
        printf("Letter grade: D");
    }else if(n>=50){
        printf("Letter grade: E");
    }else {
        printf("Letter grade: F");
    }
    printf("\n");
    return 0;
}