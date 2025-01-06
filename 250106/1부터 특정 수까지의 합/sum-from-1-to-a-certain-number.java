import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        sum(n);

        // Please write your code here.
    }
    static void sum(int n){
        int sum = 0;

        for(int i = 0; i <= n; i++){
            sum += i;
        }
        System.out.printf("%d", sum/10);
        
    }
}