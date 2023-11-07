//Printing natural numbers below n in reverse and their sum 

#include<stdio.h>
int main(){
    int x_x = 0, n, i = 1;
    printf("enter num: ");
    scanf("%d", &n);
    i = n;
    while(i >= 1){
        printf("%d\t", i);
        i--;
        x_x = x_x + i;

    }
    printf("\nsum : %d",x_x); 
    
    /* for(i=n; i>=1; i--){
        printf("%d \n", i);
    } */
} 