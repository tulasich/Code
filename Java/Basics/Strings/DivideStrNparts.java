//Dividing a String to n equal parts
public class DivideStrNparts {
    public static void main(String[] args) {
        String s = "heyhowareyou:) ";
        int length = s.length(); //15
        int n = 3;
        int chars = length/n; //5
        char[] str = s.toCharArray();
        if(length%n != 0){
            System.out.println("Can't Divide");
        }
        else{
            for(int i = 0; i<length; ){
                
            }
        }

        for(int i =0; i<str.length; i++){
            System.out.println(str[i]);
        }
    }
}
