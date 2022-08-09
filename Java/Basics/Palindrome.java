import java.util.Scanner;

//Checking if the number is palindrome or not
//Palindrome is a number or a word whose reverse is the word/number itself
//Example: MADAM, LOL, 12321, 19091
class Palindrome{
    public static void main (String[] args){
        int sum = 0, rem;

        System.out.println("hi!");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        int rev = num; //121

        for(; num !=0 ;){
            rem = num%10; 
            sum = sum*10 + rem; 
            num = num/10; 
        }

        //121
        // 1*10 + 2   12   12*10 + 1   121

        if(rev==sum){
            System.out.println(rev + " is a palindrome");
        }
        else{
            System.out.println(rev + " is not a palindrome");
        }
    }
}