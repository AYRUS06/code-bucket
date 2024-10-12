import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class gp {
  public static int kthdidgit(int n, int k) {
    int x = 0;
    while (k > 0) {
      x = n % 10;
      n = n / 10;
      k--;
    }
    return x;
  }

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    int m = kthdidgit(n, k);
    System.out.println(m);
  }

}