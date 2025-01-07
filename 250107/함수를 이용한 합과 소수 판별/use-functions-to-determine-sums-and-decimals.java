import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 사용자 입력
        int start = sc.nextInt(); // 시작 범위
        int end = sc.nextInt();   // 끝 범위

        int count = 0; // 조건을 만족하는 숫자의 개수

        for (int num = start; num <= end; num++) {
            count += isSpecialPrime(num); // 조건에 따라 누적
        }
        System.out.printf("%d", count);
    }

    static int isSpecialPrime(int num) {
        // 소수 여부 판별
        for (int divisor = 2; divisor < num; divisor++) {
            if (num % divisor == 0) {
                return 0; // 소수가 아님
            }
        }

        int digitSum = 0; // 자릿수 합
        int current = num;
        while (current > 0) {
            digitSum += current % 10; // 각 자릿수 더하기
            current /= 10;
        }

        // 자릿수 합이 짝수인지 확인
        if (digitSum % 2 == 0) {
            return 1; // 조건 만족
        } else {
            return 0; // 조건 불만족
        }
    }
}