import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();


        function(a, b);
        // Please write your code here.
    }

    static void function(int a, int b){
        int min = 0;
        int max = 0;


        if(a < b){
            min = a;
            max = b;
        }
        else{
            min = b;
            max = a;
        }
    
        max += 25;
        min *= 2;

        System.out.printf("%d %d", min, max);
        
        
    }
}