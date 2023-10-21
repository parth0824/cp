import java.util.*;
public class A_Anton_and_Letters{
    public static void main(String[] args) {
        Scanner sc  = new Scanner (System.in);
        String a = sc.nextLine();
        int b [] = new int [26];
        int count = 0;
        for(int i=1;i<=a.length()-2;i++){
            int d = (int)a.charAt(i);
            b[d-97] = b[d-97] + 1;
            i= i+2;
        }
        for(int i=0;i<26;i++){
            if(b[i] > 0){
                count++;
            }
        }
        System.out.print(count);
        sc.close();
    }
}