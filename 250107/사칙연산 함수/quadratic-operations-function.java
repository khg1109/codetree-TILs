import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        char ch = sc.next().charAt(0);
        int b = sc.nextInt();

        calculate(a, b, ch);

        // Please write your code here.
    }
    static void calculate(int a, int b, char ch){
        if(ch == '+'){
            System.out.printf("%d %c %d = %d", a, ch, b, a+b);
        }

        else if(ch == '-'){
            System.out.printf("%d %c %d = %d", a, ch, b, a-b);
        }

        else if(ch == '*'){
            System.out.printf("%d %c %d = %d", a, ch, b, a*b);
        }

        else if(ch == '/'){
            System.out.printf("%d %c %d = %d", a, ch, b, a/b);
        }
        else{
            System.out.printf("False");
        }
    }
}