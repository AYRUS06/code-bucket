import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp6 {
    public static int crossmultiply(int n, int k) {
        int x = 0;
        while (n > 0) {
            x = x + (n % 10) * (k % 10);
            n = n / 10;
            k = k / 10;
        }
        return x;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int m = crossmultiply(n, k);
        System.out.println(m);
    }

}
