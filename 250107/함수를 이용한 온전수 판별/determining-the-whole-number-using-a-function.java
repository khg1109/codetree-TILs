import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner  sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int c = 0;
        for(int i = a; i < b; i++){
            c += function(i);
        }
        System.out.printf("%d", c);

        // Please write your code here.
    }

    static int function(int i){
        if(!(i % 2 == 0) && !(i % 10 == 5) && !(i % 3 == 0 && (i % 9 != 0))){
            System.out.printf("%d ", i);

            return 1;
        }
        else{
            return 0;
        }
    }
}