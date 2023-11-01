#include<stdio.h>
int main(){
    int i,n, a[n], sum =0;
    printf("array size & elements: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]); //takes n values
    }
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    printf("sum = %d", sum);

}