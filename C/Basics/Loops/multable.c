//Multiplication table

#include<stdio.h>
int main(){
    int i, num, n, mul;
    printf("which table? ");
    scanf("%d", &num);
    printf("how many steps? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        mul = num*i;
        printf("%d * %d = %d\n",num,i,mul);
    }
}
