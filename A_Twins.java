// : you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.
import java.util.*;
public class A_Twins{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int sum = 0;
        int b [] = new int [a];
        for(int i = 0;i<a;i++){
            b[i] = sc.nextInt();
            sum = sum + b[i];
        }
        int mysum = 0;
        int count=0;
        Arrays.sort(b);
        for(int i=b.length-1;;i--){
            if((mysum)>(sum)/2){
                break;
            }
            else {
                count++;
                mysum = mysum + b[i];
            }
        }
        System.out.print(count);
        

    }
}
