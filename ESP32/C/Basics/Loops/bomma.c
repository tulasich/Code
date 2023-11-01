#include<stdio.h>
void plusblock(){
    printf("+");
        for(int i=0; i<5; i++){
            printf("/\\");
        }
    printf("+\n");
}
void barblock(){
    printf("|");
    for(int j=0; j<2*5; j++){
        printf(" ");
    }
    printf("|\n");
}
int main(){
    plusblock();
    barblock();
    plusblock();
    printf("\n");
    for(int i=0; i<=4; i++){
        barblock();
    }
    plusblock();
}