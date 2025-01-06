import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.printf("%d", sumOfPrimes(a, b)); // sum → sumOfPrimes
    }

    static int sumOfPrimes(int a, int b) { // sum → sumOfPrimes
        int sum = 0;

        if (b == 1) {
            return 0;
        }
        for (int i = a; i <= b; i++) {
            sum += isPrimeOrZero(i); // sum1 → isPrimeOrZero
        }
        return sum;
    }

    static int isPrimeOrZero(int a) { // sum1 → isPrimeOrZero
        for (int j = 2; j < a; j++) {
            if (a % j == 0) {
                return 0; // 소수가 아니면 0 반환
            }
        }
        return a; // 소수면 숫자 반환
    }
}