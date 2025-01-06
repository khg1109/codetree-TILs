import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        min(a, b, c);

        // Please write your code here.
    }

    static void min(int a, int b, int c){
        int minValue = a;

        if(minValue > b){
            minValue = b;

        }
        if(minValue > c){
            minValue = c;
        }

        System.out.println(minValue);
        
    }
}