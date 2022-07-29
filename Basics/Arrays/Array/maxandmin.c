//print greatest and smallest num in an array
#include<stdio.h>
int main(){
    int max, min, n, i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0]; //assume first element is max
    min = a[0]; //assume first element is min
    for(i=1; i<n; i++){
        if(max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("max: %d\n", max);
    printf("min: %d", min);
} //epic