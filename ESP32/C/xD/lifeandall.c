#include <stdio.h>

int main(void) {
	// your code here
	int arr[10] = {1,2,88,42,99};
	for(int i=0; i<5; i++){
		if(arr[i] == 42){
			break;
		}
		
		printf("%d\n",arr[i]);
		
	}
	
	return 0;
}