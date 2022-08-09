//All about digits

#include<stdio.h>
#include<math.h>
//#define base 10;

int firstdig(int first){
    int i;
    if(first<=10){
        return first;
    }
    for( ; first >= 10 ; ){
    first = first/10;
    }

    return first;
   //FUCKIN HELL DUDE WHY DIDNT I JUST USE WHILE LOOP FACEPALM worth learning tho eh
}
int lastdig(int last){
    last = last%10;
    return last;
}

void firstandlast(int num){
    int i;

    int first = firstdig(num);
    int last = lastdig(num);

    printf("first digit is %d \n", first);
    printf("last digit is %d \n", last);

}

void sumoffirstandlast(int num){
    int i;

    int first = firstdig(num);
    int last = lastdig(num);

    printf("sum of first and last digit: %d \n", last + first);

}

void swapdig(int num){

    int digits, swap, first, last, x;

    last = num % 10; //234%10 = 4

    digits = log10(num); //log10(234) = 2.369 --> %d --> 2

    x = pow(10, digits); //10^2 = 100

    first = num/x; //234/100 = 2.34 --> %d --> 2

    swap = last * pow(10, digits); //4*100 = 400
    swap = swap + num%x; //400 + 234%100 = 400 + 34 = 434
    swap = swap - last; // 434 - 4 = 430
    swap = swap + first; // 430 + 2 = 432 

    printf("Number before swap is %d\n", num);
    printf("Number after swap is %d\n", swap);

}

void sumofdig(int num){

    int sum = 0;

    while (num!=0)
    {
        sum = sum + num%10;
        num = num/10;
    }
     
    printf("sum of digits: %d", sum);
}

void prodofdigits(int num){
    int mul = 1;
    while (num!=0)
    {
    mul = mul* num%10;
    num = num/10;
    }
    
   printf("Multiplication of digits: %d", mul);
}

void ispalindrome(int num){
    int last, rev = 0;
    while (num!=0){
        rev = rev*10;
        rev = rev + num%10;
        num = num/10;
    }
    
    if(num == rev){
        printf("%d is a palindrome", rev);
    }
    else{
        printf("%d is not a palindrome", rev);
    }

}

void printrev(int num){
    int last, reverse = 0;
    int digits = log10(num);
    while(num != 0){
        last = num%10;
        reverse = (reverse*10) + last;
        num /= 10;
    }
    printf("original number      : %d\n", num);
    printf("reverse of the number: %d", reverse);
}

void freqofdigit(int num){
    int count = 0, n; 
/*  printf("Enter which num u wan check: ");
    scanf("%d",&n);
    while (num!=0)
    {
        int last = num %10;

        if(n == last ){
            count++;
        }
        num /= 10;
    }
    printf("%d frequency is %d", n, count);
*/
    #define n 10;
    int i, last;
    int freq[10];

    for(i=0; i<10; i++){
        freq[i] = 0;
    }
    int x = num;

    while (x!=0){
        last = num%10;
        num /= 10;
        freq[last]++;
    }
    
    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
}
void numofdigits(int num){
    int i;
    i = (num == 0)? 1 : log10(num)+1;
    printf("Number of digits is %d", i);
    //EPICCC
}

int main(){
    int num, ch;
    printf("enter num: ");
    scanf("%d", &num);
    printf("\n\nWHICH OPERATION DO YOU WANT TO PERFORM?\n");
    printf("1.See first and last digits\n2.sum of first and last dig\n3.swap first and last dig\n4.sum of digits\n5.prod of digits\n6.Check for palindrome\n7.print digits in reverse\n8.Frequency of a digit\n9.Number of digits\n\n");

    scanf("%d", &ch);

    switch(ch){
        case 1: firstandlast(num);
        break;

        case 2: sumoffirstandlast(num);
        break;

        case 3: swapdig(num);
        break;

        case 4: sumofdig( num);
        break;

        case 5: prodofdigits( num);
        break;

        case 6: ispalindrome( num);
        break;

        case 7: printrev( num);
        break;

        case 8: freqofdigit(num);
        break;

        case 9: numofdigits(num);
        break;
    }
}


//incomplete program to swap first and last digit, do tomorrow no excuses. - done hm cool
//Frequency of digits needs to be worked on.
//palindrome has to be worked on too.

yeah :(