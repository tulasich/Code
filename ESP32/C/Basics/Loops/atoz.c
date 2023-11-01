//printing characters from a to z
#include<stdio.h>
int main(){
    char ch;
    
    printf("Alphabets from a to z: ");
    ch = 'a';

    while(ch <= 'z'){
        printf("%c\t", ch);
        ch++;
        
    }
}
/* Using for loop
    for(char ch='a'; ch<'z'; ch++){
        printf("%c", ch);
    }

    */


