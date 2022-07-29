//copy a arrays elements to another array
#include<stdio.h>
int main(){
    int n,i;
    printf("array size: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[i] = a[i]; 
    }
    printf("Elements in b array now are: ");
    for(i=0; i<n; i++){
        printf("%d,", b[i]);
    }
}