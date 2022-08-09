import java.util.Scanner;

public class SpaceBoxing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Wot is your current weight on earth?");
        int weight = sc.nextInt();
        System.out.println("What planet are ya visiting son?");
        System.out.println("\t1.Venus\t2.Mars\t3.Jupiter\t4.Saturn\t5.Uranus\t6.Neptune");
        int planetNum = sc.nextInt();        

        if(planetNum==1){
            System.out.println("Your weight in here is "+weight*0.78 );
        }
        else if(planetNum==2){
            System.out.println("Your weight in here is "+weight*0.39 );
        }
        else if(planetNum==3){
            System.out.println("Your weight in here is "+weight*2.65 );
        }
        else if(planetNum==4){
            System.out.println("Your weight in here is "+weight*1.17 );
        }
        else if(planetNum==5){
            System.out.println("Your weight in here is "+weight*1.05 );
        }
        else if(planetNum==6){
            System.out.println("Your weight in here is "+weight*1.23 );
        }
        else{
            System.out.println("Ivalid input" );
        }
    }
}
