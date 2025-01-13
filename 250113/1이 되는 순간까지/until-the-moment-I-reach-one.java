import java.util.Scanner;

public class Main {
    public static int cnt = 0;
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        System.out.printf("%d", function(n));        

        // Please write your code here.
    }

    public static int function(int n){
        if(n == 1){
            return cnt++;
        }

        if(n % 2 == 0){
            n /= 2;
            function(n);

            return cnt++;
        }
        else{
            n /= 3;
            function(n);
            
            return cnt++; 
        }
    }
}