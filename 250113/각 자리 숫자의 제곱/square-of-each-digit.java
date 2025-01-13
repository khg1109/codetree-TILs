import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        System.out.printf("%d", sum(n));
    }

    public static int sum(int n) {
        // 음수 입력 처리
        n = Math.abs(n);

        if (n == 0) {
            return 0; // 종료 조건
        }

        // 현재 자리 숫자의 제곱 + 나머지 처리
        return (n % 10) * (n % 10) + sum(n / 10);
    }
}