import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp9 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int x = 0;
        int l = 0;
        int e = 0;
        while (n > 0) {
            x = n % 10;
            if (x % 2 == 0)
                l = l + 1;
            else
                e = e + 1;
            n = n / 10;

        }

        System.out.println("number of even digits:" + l + "  number of odd digits:" + e);
    }
}
