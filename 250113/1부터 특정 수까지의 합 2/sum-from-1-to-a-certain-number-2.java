import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.printf("%d",sum(n));
        // Please write your code here.
    }
    public static int sum(int n){
        if(n == 1){
            return 1;
        }

        return sum(n-1) + n; 
    }
}