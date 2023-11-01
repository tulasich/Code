//Even numbers before the given number

#include<stdio.h>
int main(){
    int n, i, sum = 0;
    printf("enter num: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++ ){

        if(i%2 == 0){
        printf("%d \n", i);
        }

        sum = sum + i;

       
    }
    printf("\n");
    printf("sum = %d \n", sum);

}