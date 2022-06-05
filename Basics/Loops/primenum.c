#include<stdio.h>
#include<math.h>
void palindrom(int num){
    //num rev == num --> Palindrome
    int rev = 0;
    int i = num;
    while(num!=0){
    rev = rev*10 + num%10;
    num = num/10;
    }
    if(i == rev){
        printf("\n%d is a palindrome", i);
    }
    else{
        printf("\n%d is not a palindrome", i);
    }
}
void armstrong(int num){
    int n, cube = 0;
    n = num;
    while (num != 0){
        num = num%10;
        cube = cube * pow(num, 3);
        num = num/10;
    }
    if(n == num){
        printf("%d is armstrong\n",n);
    }
    if(n == num){
        printf("%d is not armstrong\n", n);
    }
    
}
//printing prime numbers 1 to n
void primenum(int num){
    int i,j, isprime;
   
    for(i=2; i<num; i++){   //loop to generate numbers 1 to n
        isprime = 1;          //
        for(j=2; j<=i/2; j++){  //loop to check if the generated numbers are prime
            
                if(i%j != 0){
                    isprime = 0;
                    break;
                }
        }

        if(isprime==1){
            printf("%d, ", i);
        }
    }
}

int main(){
    int n, i;
    printf("enter num: ");
    scanf("%d", &n);
   int isprime = 1;
    for(i=2; i<n; i++){
        if(n % i == 0){
            isprime = 0;
        }
    }

    if(isprime == 0 && n>1){
        printf("%d is not a prime number", n);
    }
    else{
        printf("%d is a prime number", n);

    } 

    palindrom(n);
    primenum(n);
    armstrong(n);
}

//Needs to be worked on