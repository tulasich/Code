import java.util.*;
public class Ms1testQno1
{
    public static int findkey(int input1,int input2,int input3)
    {
        int a=Math.min(Math.min(input1/1000,input2/1000),input3/1000);
        int b=Math.min(Math.min((input1/100)%10,(input2/100)%10),(input3/100)%10);
        int c=Math.min(Math.min((input1/10)%10,(input2/10)%10),(input3/10)%10);
        int d=Math.min(Math.min(input1%10,input2%10),input3%10);

        int e=Math.max(Math.max(input1/1000,input2/1000),input3/1000);
        int f=Math.max(Math.max((input1/100)%10,(input2/100)%10),(input3/100)%10);
        int g=Math.max(Math.max((input1/10)%10,(input2/10)%10),(input3/10)%10);
        int h=Math.max(Math.max(input1%10,input2%10),input3%10);
        
        return ((e-a)*1000+(f-b)*100+(g-c)*10+(h-d));
    }
    public static void main(String[] args){
        System.out.print(findkey(5675,3521,7144));
    }
}