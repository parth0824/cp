import java.util.*;
public class A_Way_Too_Long_Words{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        while(t>0){
            t--;
            String b = sc.next();
            if(10<b.length()){
                System.out.print(b.charAt(0));
                System.out.print((b.length()-2));
                System.out.print(b.charAt(b.length()-1));
                System.out.println();
            }
            else{
                System.out.println(b);
            }
        }
    }
}