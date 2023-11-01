import java.util.Arrays;

public class PositionDifference {
    public static void main(String[] args) {
        System.out.println("hello world!");
        int i=0;
        int a[] = {5,7,2,1,3};
        //        {1,2,3,5,7}
        int posA = 0, posB = 0;
        int N = 7; //num we searchin
        //we are looking for number 5 in sorted and not
        for( i = 0; i< a.length; i++){
         //   System.out.print("Array: ");
            System.out.print(a[i]+" ");
            if(a[i]==N){
                posA = i+1;
                break;
            }
        }
        System.out.println();
        System.out.println(i+1);

        Arrays.sort(a);

        for( i = 0; i< a.length; i++){
    //      System.out.print("Array: ");
            System.out.print(a[i]+" ");
            if(a[i]==N){
                posB = i+1;
                break;
            }
        }
        System.out.println();
        System.out.println(i+1);

        System.out.println(posB-posA);
    }
}
