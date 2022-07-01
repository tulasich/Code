//A complicated but interesting/worth learning program of programming-by-doing
//% [alignment] [width] [.decimal] f  
//% [alignment] [width] d

public class Lettertoyourself {
    public static void main(String[] args) {
        String s = "+--------------------------------------------------------------+";
        int x = s.length();
        System.out.println(x);
        int n = 17;
        char c = ' ';
        System.out.println("+--------------------------------------------------------------+");

        for(int i=0; i<n; i++){
            System.out.print("|");
            if(i==1){
                System.out.printf("%40c 1st July, 2022",c);
                System.out.printf("%7c",c);
                System.out.println("|");
            }
            else if(i==2){
                System.out.printf("%40c Friday",c);
                System.out.printf("%15c",c);
                System.out.println("|");
            }
            else if(i==6){
                System.out.printf("%5c Dear comrade,",c);
                System.out.printf("%43c",c);
                System.out.println("|");
            }
            else if(i==7){
                System.out.printf("%5c It's okay. It gets better, everything does.",c);
                System.out.printf("%13c",c);
                System.out.println("|");
            }
            else if(i==12){
                System.out.printf("%40c Yours Lovingly,",c);
                System.out.printf("%6c",c);
                System.out.println("|");
            }
            else if(i==13){
                System.out.printf("%40c Tulasi",c);
                System.out.printf("%15c",c);
                System.out.println("|");
            }
            else{
                System.out.printf("%62c",c);
                System.out.println("|");
            }

            

        }
        System.out.println("+--------------------------------------------------------------+");


    }
}
