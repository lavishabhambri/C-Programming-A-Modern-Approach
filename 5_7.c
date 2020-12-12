#include<stdio.h>
int main(){
    int a,b,c,d,l1,l2,s1,s2,l,s;
    printf("Enter four integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        l1=a;
        s1=b;
    }else{
        l1=b;
        s1=a;
    }

    if(c>d){
        l2=c;
        s2=d;
    }else{
        l2=d;
        s2=c;
    }

    if(l1<l2){
        l=l2;
    }else{
        l=l1;
    }

    if(s1<s2){
        s=s1;
    }else{
        s=s2;
    }

    printf("Largest: %d\n",l);
    printf("Smallest: %d\n",s);
    return 0;
}