import java.util.Scanner;

public class Main {
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);



        int n = sc.nextInt();

        function(n);

        // Please write your code here.
    }
    
    static void function(int n){
        int a = n / 10;
        int b = n % 10;


        //System.out.printf("%d %d", a, b);

        if((a+b) % 5 == 0 && n % 2 == 0){
            System.out.println("Yes");
            return;
        }
        System.out.println("No");

    }
}