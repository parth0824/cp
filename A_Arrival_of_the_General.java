import java.util.*;
public class A_Arrival_of_the_General{
    public static void main(String args[]){
        Scanner sc  = new Scanner (System.in);
        int a = sc.nextInt();
        int b [] = new int [a];
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i=0;i<b.length;i++){
            b[i] = sc.nextInt();
            max = Math.max(max,b[i]);
            min = Math.min(min,b[i]);
        }
        int f=0;
        int g=0;
        for(int i=0;i<b.length;i++){
            if(b[i]==max){
                f = i + 1;
                break;
            }
        }
        for(int i=0;i<b.length;i++){
            if(b[i]==min){
                g = i + 1;
            }
        }
        if(f < g){
            System.out.print(a - g + f - 1);
        }
        else{
            System.out.print(a - g + f - 1 -1);
        }
    }
}