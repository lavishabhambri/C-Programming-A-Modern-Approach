#include<stdio.h>
int main(){
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16;
    //sums rowwise,colwise,diagwise
    int row1,row2,row3,row4,col1,col2,col3,col4;
    int diag1,diag2;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);
    row1 = x1+x2+x3+x4;
    row2 = x5+x6+x7+x8;
    row3 = x9+x10+x11+x12;
    row4 = x13+x14+x15+x16;

    col1 = x1+x5+x9+x13;
    col2 = x2+x6+x10+x14;
    col3 = x3+x7+x11+x15;
    col4 = x4+x8+x12+x16;

    diag1 = x1+x6+x11+x16;
    diag2 = x4+x7+x10+x13;

    printf("\n%2d %2d %2d %2d\n", x1, x2, x3, x4);
    printf("%2d %2d %2d %2d\n", x5, x6, x7, x8);
    printf("%2d %2d %2d %2d\n", x9, x10, x11, x12);
    printf("%2d %2d %2d %2d\n", x13, x14, x15, x16);

    printf("\nRow sums: %2d %2d %2d %2d\n", row1, row2, row3, row4);
    printf("Column sums: %2d %2d %2d %2d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %2d %2d\n\n", diag1, diag2);  

    return 0;

}