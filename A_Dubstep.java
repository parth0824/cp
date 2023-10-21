import java.util.*;
public class A_Dubstep{
    public static void main(String[] args) {
        Scanner sc  = new Scanner (System.in);
        String a = sc.nextLine();
        int t = 0;
        int i =0;
        if(a.length() >=3){
        for(i=0;i<=a.length()-3;i++){
            if(a.charAt(i) == 'W' && a.charAt(i+1) == 'U' && a.charAt(i+2) == 'B'){
                i = i + 2;
                if(t==0){
                    System.out.print(" ");
                }
                t = 1;
            }
            else{
                System.out.print(a.charAt(i));
                t = 0;
            }
        }
        if(a.charAt(a.length()-3-0)=='W' && a.charAt(a.length()-3+1)=='U' && a.charAt(a.length()-3+2)=='B'){

        }
        else if(a.charAt(a.length()-3-1)=='W' && a.charAt(a.length()-3-0)=='U' && a.charAt(a.length()-3+1)=='B'){
            System.out.print(a.charAt(a.length()-3+2));
        }
        else if(a.charAt(a.length()-3-2)=='W' && a.charAt(a.length()-3-1)=='U' && a.charAt(a.length()-3-0)=='B'){
            System.out.print(a.charAt(a.length()-3+1));
            System.out.print(a.charAt(a.length()-3+2));
        }
        else{
            System.out.print(a.charAt(a.length()-3+1));
            System.out.print(a.charAt(a.length()-3+2));
        }       
    }
    else{
        System.out.print(a);
    }
}
}