// import java.util.*;
// public  class A_Ilya_and_Bank_Account{
//     public static void main(String[] args){
//         Scanner sc = new Scanner (System.in);
//         int a = sc.nextInt();
//         if(a >= 0){
//             System.out.print(a);
//         }
//         else if(a > -100){
//             int c = a/10;
//             int d = a%10;
//             System.out.print(Math.max(c,d));
//         }
//         else{
//         int b = a / 10;
//         int d=a%10;
//         int f = a;
//         int g = 0;
//         while(g != 2){
//             g++;
//             f = f /10;
//         }
//         f = f * 10;
//         f = f + d;
//         System.out.print(Math.max(b,f));
//     }
//     }
// }


import java.util.Scanner;
public class A_Ilya_and_Bank_Account{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int numb = in.nextInt();
		String n = Integer.toString(numb);
		int a, b;
		a = Integer.parseInt(n.substring(0, n.length() - 1));
		b = Integer.parseInt(n.substring(0, n.length() - 2) + n.substring(n.length() - 1));
		System.out.println(Math.max(a, Math.max(numb, b)));
		in.close();
	}
}