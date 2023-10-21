import java.util.*;
class A_Plus_One_on_the_Subset{
    public static void main(String[] args) {
        Scanner  sc = new Scanner (System.in);
        int t = sc.nextInt();
        for(int j=0;j<t;j++){
            int a = sc.nextInt();
            int b [] = new int [a];
            int max = Integer.MIN_VALUE,min = Integer.MAX_VALUE;
            for(int i=0;i<a;i++){
                b[i] = sc.nextInt();
                if(b[i]>max)  max = b[i];
                if(b[i]<min)  min = b[i];
            }
            System.out.println(max-min);
        }
    }
}