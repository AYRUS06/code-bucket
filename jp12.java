import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class jp12 {
    public static int sumofdidgit(int n) {
        int x = n%10;int k=0;
        while (n > 0) {
            if()
            n = n / 10;

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