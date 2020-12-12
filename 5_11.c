#include<stdio.h>
int main(){
    int n;
    printf("Enter a two digit number: ");
    scanf("%2d",&n);
    printf("You entered the number ");
    if(n==11){
        printf("Eleven");
    }else if(n==12){
        printf("twelve");
    }else if(n==13){
        printf("thirteen");
    }else if(n==14){
        printf("fourteen");
    }else if(n==15){
        printf("fifteen");
    }else if(n==16){
        printf("sixteen");
    }else if(n==17){
        printf("seventeen");
    }else if(n==18){
        printf("eightteen");
    }else if(n==19){
        printf("nineteen");
    }else{
        int a=n/10, b=n%10;
        switch(a){
        case 2: printf("twenty ");
        break;
        case 3: printf("thirty "); break;
        case 4: printf("forty "); break;
        case 5: printf("fifty "); break;
        case 6: printf("sixty "); break; 
        case 7: printf("seventy "); break;
        case 8: printf("eighty "); break;
        case 9: printf("ninety "); break;
        }
        switch(b){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        }
    }
    printf("\n");
}