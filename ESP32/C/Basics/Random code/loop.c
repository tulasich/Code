#include<stdio.h>
int main(){
	int x = 2;
	while(x){
	//	printf("how many times is it runnin"); // loops forever
    //	printf(x); //  warning passing argument 1 of 'printf' makes pointer from integer without a cast
    
    // In java boolean and integer are not compatible. while(x) wouldn't work there.
    //while(true) while(false) shall work
    	printf("how about now?");
    	break;
	}
}
