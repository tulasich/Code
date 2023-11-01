//print number of negative numbers in an array
#include<stdio.h>
int main(){
    int n,i, a[n];
    int neg = 0;
    printf("array size: ");
    scanf("%d", &n);
    printf("array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i] < 0){
            neg++;
            printf("%d,", a[i]);
        }
    }
    printf("\n%d negative numbers", neg);
}