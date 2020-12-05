#include<stdio.h>
#include<math.h>
int main(){
    float r, v;
    printf("Enter the radius");
    scanf("%f", &r);
    v = (4.0f/3.0f)* 3.14*r*r*r;
    printf("Volume = %f\n", v);
    return 0;
}