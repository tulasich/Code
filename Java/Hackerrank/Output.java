import java.util.Scanner;

//Using printf
public class output {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for(int i =0; i<3; i++){
            String s1 = sc.next();
            int x = sc.nextInt();
            System.out.printf("%s%d",s1,x);
        }
    }
}
