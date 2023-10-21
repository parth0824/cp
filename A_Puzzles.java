import java.util.*;
public class A_Puzzles{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a []= new int [m];
        for(int i=0;i<a.length;i++) a[i] = sc.nextInt();
        Arrays.sort(a);
        int min = Integer.MAX_VALUE;
        for(int i=0;i<=m-n;i++){
            int sum = 0;
            sum = a[i+n-1] - a[i];
            min = Math.min(min,sum);
            sum = Integer.MAX_VALUE;
        }
        System.out.print(min);
    }
}