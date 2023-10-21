import java.util.*;
public class A_I_Wanna_Be_the_Guy{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int e [] = new int [n];
        for(int i=0;i<n;i++){
            e[i] = i+1;
        }
        int b [] = new int [a];
        for(int i=0;i<a;i++){ 
            b[i] = sc.nextInt();
            for(int j=0;j<n;j++){
                if(b[i]==e[j]){
                    e[j] = 0;
                    break;
                }
            }

        }
        int c = sc.nextInt();
        int d [] = new int [c];
        for(int i=0;i<c;i++){
            d[i] = sc.nextInt();
            for(int j=0;j<n;j++){
                if(d[i]==e[j]){
                    e[j] = 0;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(e[i]!=0){
                System.out.print("Oh, my keyboard!");
                return;
            }
        }
        System.out.print("I become the guy.");
    }
}