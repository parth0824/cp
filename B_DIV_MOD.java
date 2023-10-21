import java.util.*;
public class B_DIV_MOD{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t != 0){
            --t;
            int l = sc.nextInt();
            int r = sc.nextInt();
            int a = sc.nextInt();
            if(r/a > r%a){
                
            }
            if(r < a){
                System.out.println(l%a);
                continue;
            }
            if(r % a == 0){
                r= r-1;
            }
            System.out.println((r/a)+(r%a));
        }
    }
}