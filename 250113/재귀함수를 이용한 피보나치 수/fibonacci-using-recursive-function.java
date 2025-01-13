import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();



        System.out.printf("%d",function(n)); 

        // Please write your code here.
    }

    public static int function(int n){
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 1;
        }
        return function(n - 1) + function(n - 2);
    }
}