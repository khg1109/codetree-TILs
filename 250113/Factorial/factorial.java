import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int n = sc.nextInt();


        System.out.printf("%d", Factorial(n));

        // Please write your code here.
    }

    public static int Factorial(int n){
        if(n == 1){
            return 1;

        }

        return Factorial(n - 1) * n;
        
    }
}