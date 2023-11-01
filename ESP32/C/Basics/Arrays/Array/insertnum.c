//insert an element in an array
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int num, index;
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    printf("Index at which element to be inserted: ");
    scanf("%d", &index);
    //scan elements of array
    for(i=0; i<n; i++){
        printf("%d,", a[i]);
    }
    if(index>n){
        printf("invalid position! Enter between 0 and %d", n);
    }
    else{
        //shift elements after required position index to right
        for(i=n; i>=index; i--){
            a[i] = a[i-1];
        }

        a[index] = a[index-1];
        n++;

        for(i=0; i<n; i++){
            printf("%d", a[i]);
        }
    }
}

//to-do
//second largest
//insert num
//delete num