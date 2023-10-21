import java.util.*;
public class A_Watermelon{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        if(a==2) System.out.print("NO");
        else{
        if((a%2)==0) System.out.print("YES");
        else System.out.print("NO");
        }
    }
}