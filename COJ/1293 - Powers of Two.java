import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int exp;
        exp = sc.nextInt();
        BigInteger a = new BigInteger("2");
        BigInteger b;
        b = a.pow(exp);
        System.out.println(b);
    }
}
