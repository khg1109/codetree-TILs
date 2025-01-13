import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        printNumber1(n);
        System.out.println();

        printNumber2(n);
        // Please write your code here.
    }

    public static void printNumber1(int n){
        if(n == 0){
            return;
        }
        printNumber1(n -1);
        System.out.printf("%d ", n);

    }

    public static void printNumber2(int n){
        if(n == 0){
            return;
        }
        System.out.printf("%d ", n);
        printNumber2(n -1);

        
    }
}