//Program to print preinitialized numbers of an arrat
//non declared array indices are replaced by 0
public class Printanarray{
    public static void main(String[] args) {
        int i = 0;
        int arr[] = new int[10];
        arr[0] = 2;
        arr[3] = 5;
        arr[4] = 7;
        for( i=0; i<=3; i++){
            System.out.print(arr[i]+", ");
        }
        System.out.println(arr[i]);
    }
}
