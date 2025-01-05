import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();


        printNumber(n);
                // Please write your code here.
    }

    static void printNumber(int n){
        int c = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                c++;
                System.out.print(c+ " ");
                if(c == 9){
                    c = 0;

                }
            }
            System.out.println();

        }
    }
}