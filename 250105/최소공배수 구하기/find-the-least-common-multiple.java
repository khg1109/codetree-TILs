import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int gcd = findGCD(n, m);
        int lcm = findLCM(n,m, gcd);

        System.out.println(lcm);


        // Please write your code here.
    }
    static int findGCD(int n, int m){
        while(m != 0){
            int temp = m;
            m = n % m;
            n = temp;
        }
        return n;
    }

    static int findLCM(int n, int m, int gcd){
        return (n * m) / gcd;
    }
}