#include<stdio.h>
#include<limits.h>
int main(){
    int n, i, even, odd;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    even = 0;
    odd = 0;
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even elements: %d\n", even);
    printf("odd elements: %d", odd);
}