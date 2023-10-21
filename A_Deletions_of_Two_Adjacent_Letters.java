import java.util.*;
public class A_Deletions_of_Two_Adjacent_Letters{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a =  sc.nextInt();
        while(a > 0){
            --a;
            String b = sc.next();
            String c = sc.next();int t = 0;
            for(int i=0;i<b.length();i++){
                if(c.charAt(0) == b.charAt(i)){
                    if(i % 2 == 0){
                        System.out.println("YES");
                        t=1;
                        break;
                    }
                }
            }
            if(t==0){
                System.out.println("NO");
            }
        }
    }
}