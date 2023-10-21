import java.util.*;
public class A_Presents {
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int b [] = new int [a];
        int max = Integer.MIN_VALUE,min = Integer.MAX_VALUE;
        int count=0;
        for(int i=0;i<a;i++){
            b[i] = sc.nextInt();
            max = Math.max(max,b[i]);
            min = Math.min(min,b[i]);
        }
        for(int i=b.length-1;i>=0;i--){
            if(b[i]==min){
                for(int j=i;j<b.length;j++){
                    int temp = b[i];
                    b[i] = b[i+1];
                    b[i+1] = temp;
                    count++;
                }
                break;
            }
        }
        for(int i=0;i<b.length;i++){
            if(b[i] == max){
                for(int j=i;j>0;j++){
                    int temp = b[i];
                    b[i] = b[i-1];
                    b[i-1] = temp;
                    count++;
                }
                break;
            }
        }


        System.out.print(count);



  
    }
}