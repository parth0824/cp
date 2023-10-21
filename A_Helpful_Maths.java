import java.util.*;
public class A_Helpful_Maths{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        int f=0,s=0,t=0;
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='+') continue;
            else if(a.charAt(i)=='1') f++;
            else if(a.charAt(i)=='2') s++;
            else if(a.charAt(i)=='3') t++;
            
        }
        for(int i=0;i<f;i++){
            if(i==f-1){if(t==0&&s==0){ System.out.print("1");break;}}
            System.out.print("1+");
        }
        for(int i=0;i<s;i++){
            if(i==s-1) {if(t==0) {System.out.print("2"); break;}}
            System.out.print("2+");
        }
        for(int i=0;i<t;i++){
            if(i==t-1){System.out.print(3);break;}
            System.out.print("3+");
        }
    }
}