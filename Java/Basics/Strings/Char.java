//Program to count total number of characters in a String

class Char{
    public static void main(String[] args) {
        int count= 0;
        String s = "this is a string surely";
        for(int i = 0; i<s.length(); i++){
            count = count + 1;
            System.out.print(s.charAt(i));
        }        
        System.out.println();
        System.out.println(count);
    }
}