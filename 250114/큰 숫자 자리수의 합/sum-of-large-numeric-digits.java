import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = 1;

        int num;
        for(int i = 0; i < 3; i++){
            num = sc.nextInt();
            a *= num;
        }

        System.out.printf("%d",function(a));

        // Please write your code here.
    }
    public static int function(int a){
        
        if(a == 0){
            return a % 10;
        }

        return function(a /= 10) + a % 10;
    }
    
}