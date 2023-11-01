//10 Green Bottles hanging on a wall 

public class BottleSong {
    public static void main(String[] args) {
        int bottlesNum = 10;
        String word = "bottles";
        while (bottlesNum > 0) {
            if (bottlesNum == 1) {
                word = "bottle"; // singular, as in ONE bottle.
            }
            
            if(bottlesNum%2==0){
                System.out.println(bottlesNum + " green " + word + ", hanging on the wall");
                System.out.println(bottlesNum + " green " + word + ", hanging on the wall");
                System.out.println("And if one green bottle should accidentally fall,");
            }
            else{
                System.out.println(bottlesNum + " green " + word + ", hanging on the wall");
                System.out.println("And if one green bottle should accidentally fall,");
            }
            bottlesNum = bottlesNum - 1;
            
            if (bottlesNum > 0) {
            System.out.println("There'll be " + bottlesNum + " green " + word + ", hanging on the wall");
            System.out.println();
            } else {
            System.out.println("There'll be no green bottles, hanging on the wall");
            } // end else
        } // end while loop
    } // end main method
} // end class
