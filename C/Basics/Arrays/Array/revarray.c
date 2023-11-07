//program to reverse an array
#include<stdio.h>
int main(){
    int n, i, temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[100];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n/2; i--){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = a[i];
    }
    for(i=n; i>=n; i--){
        printf("%d\t", a[i]);
    }
        
}
//save for later
//epic EPIC WHAT??