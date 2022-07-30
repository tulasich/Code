public class LargestNum {
    public static void main(String[] args) {
        int arr[] = {72,21,52,82,4,87,5,32};
        int largestNum = arr[0];
        //System.out.println(arr.length);
        for(int i = 0; i<arr.length; i++){ //0 1 2 3
            if(largestNum<arr[i]){
                largestNum = arr[i];
            }
        }
        System.out.println("The largest number in the array is: "+ largestNum);
    }
}
