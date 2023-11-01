//Sum of digits in a number
#include<stdio.h>
int main(){
    int num, sum = 0, mul = 1;
    printf("enter num: ");
    scanf("%d", &num);
//sum of the digts

 /*   while(num!=0){
        sum = sum + num%10;
        num=num/10;
    }

    printf("%d", sum); */


//product of digits

while(num!=0){
    mul = mul * (num%10);
    num = num/10;
}

printf("%d", mul);

}
