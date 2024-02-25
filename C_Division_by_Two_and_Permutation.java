import java.util.*;

class C_Division_by_Two_and_Permutation {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while (0 < t--) {
      int a = sc.nextInt();
      int b[] = new int[a];
      for (int i = 0; i < a; i++) {
        b[i] = sc.nextInt();
      }
      int sum = (a * (a + 1)) / 2;
      int csum = 0;
      int c[] = new int[a];
      for (int i = 0; i < a; i++) {
        for (int j = 0;; j++) {
          if (b[i] <= a) {
            c[i] = b[i];
            csum = csum + c[i];
            break;
          } else {
            b[i] = b[i] / 2;
          }
        }
      }
      Arrays.sort(c);
      int y;
      for (y = 0; y < a; y++) {
        if (sum == csum) {
          System.out.println(1 + "NO");
          break;
        }
        if (c[y] == y + 1) {} else {
          System.out.println(2 + "NO");
          break;
        }
      }
      if (y == a) {
        System.out.println("YES");
      }
    }
  }
}
