import java.util.*;
public class A_Chat_room{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        String b = "hello";
        int j=0;
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)==b.charAt(j)){
                j++;
                if(j==b.length())break;
            }
            else{
                continue;
            }
        }
        if(j==b.length()){
            System.out.print("YES");
        }
        else{
            System.out.print("NO");
        }
    }
}