import java.util.*;
public class A_Lucky_Division{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int i,p=0,a = sc.nextInt();
        int b[] = new int []{4,7,47,74,447,474,477,444,777,744,747,774};
        for( i=0;i<b.length;i++){
            if((a%b[i])==0){
                System.out.print("YES");
                p++;
                break;
            }
        }
        if(p!=1){
            System.out.println("NO");
        }
    }
}