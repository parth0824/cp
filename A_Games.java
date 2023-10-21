import java.util.*;
public class A_Games{
    public static void main(String[] args) {
        Scanner sc  = new Scanner (System.in);
        int n = sc.nextInt();
        int a[][] = new int[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                a[i][j] = sc.nextInt();
            }
        }
        int count = 0;
        int t=1;
        int y=0;
        for(int h=0;h<n;h++){
            for(int i=0;i<n;i++){
                if(a[h][y] == a[i][t]){
                    count++;
                }
            }   
        }
        System.out.print(count);
    }
}