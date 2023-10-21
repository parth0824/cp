import java.util.*;
public class A_Cheap_Travel{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        int ride = 0;
        int cost = 0;
        if((b/m)<a){
            int h = n/m;
            cost = h * b;
            ride = h * m;
            int rem = n - ride;
            int co = 0;
            while(rem != 0){
                rem--;
                co = co + a;
            }
            if(co > b){
                cost = cost + b;                          
            }
            else{
                while(ride < n){
                    ride = ride + 1;
                    cost = cost + a;
                }  
            }
        }
        else{
            while(ride < n){
                ride = ride + 1;
                cost = cost + a;
            }
        }
        System.out.print(cost);
    }
}