import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        

        int n = sc.nextInt();
        int m = sc.nextInt();


        findGCD(n, m);
        // Please write your code here.
    }
    static void findGCD(int n, int m){
        int min;

        if(n < m){
            min = n;
        }
        else{
            min = m;
        }

        for(int i = min; i > 1; i--){

            if((n % i == 0) && (m % i == 0)){
                System.out.println(i);
                return;

            }
        }
    }
}