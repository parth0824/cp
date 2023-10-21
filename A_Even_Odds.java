import java.util.*;
public class A_Even_Odds{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        sc.close();
        if(a%2==0){
            if(b <= (a/2)){
                System.out.print((b*2) -1);
            }
            else{
                System.out.print((b*2) -8);
            }
        }
        else{
            if(b <= (a/2)+1){
                System.out.print((b*2) -1);
            }
            else{
                System.out.print((b*2) -8);
            }
        }
    }
}