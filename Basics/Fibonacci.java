import java.util.Scanner;

public class  Fibonacci {
    public static void main(String[] args) {
        int n, n3 = 0;

        System.out.print("Enter last index position for fibonacci series: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int n1 = 0;
        int n2 = 1;
        System.out.print(n1+" "+n2);
        for(int i=2; i<=n; i++){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            System.out.print(" "+n3);

        }
        System.out.println();
        System.out.println(n3);
    }
}
