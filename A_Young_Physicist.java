import java.util.*;
public class A_Young_Physicist{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int a [][] = new int [n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                a[i][j] = sc.nextInt();
            }
        }
        int sum = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                sum = sum + a[j][i];
            }
            if(sum != 0){
                System.out.print("NO");
                return ;
            }
        }
        System.out.print("YES");
    }
}