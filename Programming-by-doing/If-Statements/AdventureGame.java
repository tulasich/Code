import java.util.Scanner;

public class AdventureGame {
    public static void main(String[] args) {
        System.out.println("hello \ncool");
        System.out.println("WELCOME TO ADVENTURE GAME");
        System.out.println("maybe");
        System.out.println("\n");
        System.out.println("ok u wanna go to \"kitchen\" or \"bedroom\"");
        System.out.print(">");
        Scanner sc = new Scanner(System.in);
        String room = sc.next();
        if(room.equals("kitchen")){
            System.out.println("ok fine, now, well then do u want open regrigerator and eat or keep moving forward");
            System.out.println("1. Open Refrigerator\n2. Move forward");
            int selection = sc.nextInt();
            if(selection == 1){
                System.out.println("Refrigerator door is open");
                System.out.println("cool, bread or water?");
                System.out.println("1.Bread 2.Water\n\n");
                System.out.print(">");
                int foodChoice = sc.nextInt();
                if(foodChoice==1){
                    System.out.println();
                    System.out.println("You eat bread, it's got fungus, now you have diarrhea so u go home. bye.\n");
                }
                else if(foodChoice==2){
                    System.out.println();
                    System.out.println("You drink water, somehow pass out and somehow are at home but that's not your home.\n\n");
                }
                else{
                    System.out.println();
                    System.out.println("there's not many choices but oh come on. Invalid input jeez.\n");
                }
            }
            else if(selection==2){
                System.out.println();
                System.out.println("You chose to move forward");
                System.out.println("You are moving forward in game but are u moving any forward in real life? kekw");
                System.out.println();
            }
            else{
                System.out.println();
                System.out.println("Choose properly.");
            }
        }
        else if(room.equals("bedroom")){
            System.out.println("Bedroom. There's a bathroom here so u might want to use it or just rest on bed.");
                System.out.println("1.rest 2.washroom");
                System.out.print(">");
                int bedroomChoice = sc.nextInt();
                if(bedroomChoice==1){
                    System.out.println();
                    System.out.println("You slept for too long and now youre disqualified.");
                }
                else if(bedroomChoice==2){
                    System.out.println();
                    System.out.println("As soon as u entered washroom you passed through the tunnel on floor and landed outside castle. World is a strange place.");
                }
                else{
                    System.out.println();
                    System.out.println("Can you please enter atleast an input properly? \nFailure");;

                }

        }
        else{
            System.out.println();
            System.out.println("Invalid input, facepalm for the love of god.");
        }
        sc.close();
    }
}
