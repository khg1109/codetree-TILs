import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int n = sc.nextInt();

        printNumber(n);
        // Please write your code here.
    }

    public static void printNumber(int n){
        if(n == 0){
            return;
        }

        System.out.printf("%d ", n);
        printNumber(n-1);
        System.out.printf("%d ", n);
    }
}