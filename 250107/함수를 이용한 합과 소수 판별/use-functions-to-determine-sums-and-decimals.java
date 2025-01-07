import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int c = 0;

        for(int i = a; i <= b; i++){
            c +=isPrime(i);
        }
        System.out.printf("%d", c);

        // Please write your code here.
    }


    static int isPrime(int i){
        
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                return 0;
            }
        }
        
        int sum = 0;
        int a = 0;
        while(i > 0){
            a = i % 10;
            sum += a;
            i /= 10;

        }

        if(sum % 2 == 0){
            return 1;
        }
        else{
            return 0;
            
        }

     
    }
}