//Program to add two matrices
//epic fail
#include<stdio.h>
int main(){
    int i, j, row1, column1, row2, column2, fianlc, finalr;
    printf("Enter row and column size: ");
    scanf("%d%d",&row1, &column1);
    int a[row1][column1];
    printf("Enter first matrix elements:\n");
    for(i=0; i<=row1; i++){
        for(j=0; j<=column1; j++){
            scanf("%d", &a[row1][column1]);
        }
    }
    printf("Enter row and column size: ");
    scanf("%d%d",&row2, &column2);
    int b[row2][column2];
    printf("Enter first matrix elements:\n");
    for(i=0; i<=row2; i++){
        for(j=0; j<=column2; j++){
            scanf("%d", &b[row2][column2]);
        }
    }
    int result[finalr][fianlc];
    result[finalr][fianlc] = a[row1][column1] + b[row2][column2];
    if(row1>=row2 && column1>=column2){
        for(i=0; i<=row1; i++){
            for(j=0; j<=column1; j++){
                printf("%d", result[row1][column1]);
            }
        }
    }

}