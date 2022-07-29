//insert an element in an array
//to solve
#include<stdio.h>
int main(){
    int n, i, j, count;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    int freq[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        freq[i] = 1;
    }
    //check if elements are same by comparing each element with all other elements
    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if(a[i] == a[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
        printf("Frequency of all elements in the array\n ");
        for(i=0; i<n; i++){
            if(freq[i] != 0){
                printf("frequency of %d: %d\n", a[i], freq[i]);
            }
        }
    }
}
