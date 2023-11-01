import java.util.Arrays;

class Anagram{
    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "ohlle";
        s1 = s1.toUpperCase();
        s2 = s2.toUpperCase();
        if(s1.length() != s2.length()){
            System.out.println("not anagram");
        }
        else{
            char[] str1 = s1.toCharArray();
            char[] str2 = s2.toCharArray();
          //  for(int i = 0; i<str1.length; i++){
          //     System.out.println(str1[i]);
          //  }
            Arrays.sort(str1);
            Arrays.sort(str2);

            if(Arrays.equals(str1, str2)){
                System.out.println("Anagram");
            }
            else{
                System.out.println("Sadly, no not anagram");
            }
        }
    }
}