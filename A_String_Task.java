import java.util.*;
public class A_String_Task{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String a = sc.next();
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='a'|| a.charAt(i)=='A'||a.charAt(i)=='o'||a.charAt(i)=='O'||a.charAt(i)=='y'||a.charAt(i)=='Y'||a.charAt(i)=='E'||a.charAt(i)=='e'||a.charAt(i)=='u'||a.charAt(i)=='U'||a.charAt(i)=='i'||a.charAt(i)=='I'){

            }
            else{
                if(a.charAt(i)<=91&&a.charAt(i)>=65){
                    char b =a.charAt(i);
                    System.out.print("."+(char)(b+32));
                }
                else{
                    System.out.print("."+a.charAt(i));
                }
            }
        }
    }
}