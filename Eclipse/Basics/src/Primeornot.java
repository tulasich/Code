import java.util.*;
public class Primeornot {
	public static void main(String args[]) {
		int i,j, num, isprime = 0;
		System.out.println("Enter a number: ");
		Scanner sc = new Scanner(System.in);
		num = sc.nextInt();
		for(i=2; i<=num; i++){
			if(num%i==0) {
				isprime = 0;
				break;
			}
			else {
				isprime = 1;
				break;
			}
		}
		if(isprime == 0) {
			System.out.println(num+ " is not a prime number");
		}
		else {
			System.out.println(num+ " is a prime number");
		}
	}
}
