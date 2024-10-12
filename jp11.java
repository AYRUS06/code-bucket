import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp11 {
    public static int sumofdidgit(int n) {
        int x = n % 10;
        while (x % 2 != 0) {

            n = n / 10;
            x = n % 10;

        }
        return x;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int m = sumofdidgit(n);
        System.out.println(m);
    }

}