// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Shifttoleft{
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5};
        int temp = 0, i=0, j=0;
        int n = arr.length;
        temp = arr[0];
        for(i=0 ; i<arr.length - 1; i++){
            arr[i] = arr[i+1];
            System.out.println(arr[i]);
        }
        System.out.println(temp);
    }
}