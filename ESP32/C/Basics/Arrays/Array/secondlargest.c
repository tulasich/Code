//second largest and smallest numbers EPIC
#include<stdio.h>
int main(){
    int n, i, j, temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[j]<=a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d\t\n", a[i]);
    }   
    printf("The second largest number is %d\n", a[n-2]);
    printf("The second smallest number is %d\n", a[1]);
}