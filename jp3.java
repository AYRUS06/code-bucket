import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp3 {
    public static int kthdidgit(int n) {
        int x = 0;
        while (n / 10 > 0) {
            x = n % 10;
            n = n / 10;

        }
        return x;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int m = kthdidgit(n);
        System.out.println(m);
    }

}