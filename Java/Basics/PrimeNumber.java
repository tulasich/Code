import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {

        int i,num, flag = 0;

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number: ");
        num = sc.nextInt();

        if(num == 0 || num == 1){
            System.out.println(num + " is not a prime number");
        }

        else{

            for(i=2; i<num/2; i++){
                if(num%i==0){ //Modular division to check remainder
                    System.out.println(num + " is not a prime number");
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                System.out.println(num + " is a prime number");
            }

        }
    }
}
