import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.printf("%d",sum(a, b));
        // Please write your code here.
    }


    static int sum(int a, int b){
        int sum = 0;

        if(b == 1){
            return 0;   
        }
        for(int i = a; i <= b; i++){
          //  System.out.printf("%d \n", sum1(i));

            sum += sum1(i);
        }

        return sum;

    }

    static int sum1(int a){

        for(int j = 2; j < a; j++){
            if(a % j == 0){
                return 0; 
            }
        }
        return a;
    } 
}