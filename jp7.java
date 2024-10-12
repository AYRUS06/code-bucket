import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp7 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = 0;
        while (n > 0) {
            double r = Math.pow(10.0, k);
            k = n % 10 * (int) Math.round(r);
            System.out.println(k);
            n = n / 10;
        }

    }

}
