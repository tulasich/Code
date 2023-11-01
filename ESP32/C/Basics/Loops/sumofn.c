// printing n natural numbers and their sum

#include<stdio.h>
int main(){
    int n, sum = 0;
    int i = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    /*for(i=0; i<=n; i++ ){
        printf("%d \n", i);
        sum = sum + i;
    }
    printf("\n");
    printf("sum: %d", sum); */

    while(i <= n){
        printf("%d \n", i);
        sum = sum + i;
        i++;
        
    }

    printf("sum = %d \n", sum);

}