//Program to find second largest and smallest number in an array
//Sort the elements
//a[1] - Second smallest
//a[n-1] - Second Largest
public class SecondLargeSmol {
    public static void main(String[] args) {
        int[] arr = {23,56,4,3,0,9};
        int temp;
        System.out.print("Sorted Array: ");
        for(int i = 0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[j]<arr[i]){ //Sorting in Ascending Order
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
            System.out.print(arr[i]+" ");
        }

        System.out.println();
        System.out.println("The Second Largest Number is: "+ arr[arr.length-2]);
        System.out.println("The Second Smallest Number is: "+ arr[1]);
        System.out.println("Largest Number: " + arr[arr.length-1]);
        System.out.println("Smallest Number: "+ arr[0]);
    }
}
