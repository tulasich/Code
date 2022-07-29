//input array and print it
#include<stdio.h>
int main(){
    int n, a[n], i;
    printf("Enter number of array elements: ");
    scanf("%d", &n);
    printf("Enter array elements ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array elements are:\n");
    for(i=0; i<n; i++){
        printf("%d,", a[i]);
    }
}