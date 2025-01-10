import java.util.Scanner;

class Number{
    int n;

    Number(int n){
        this.n = n;
    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();


        Number c = new Number(a);
        Number d = new Number(b);

        
        function(c, d);


        System.out.printf("%d %d", c.n, d.n);
        // Please write your code here.
    }

    static void function(Number c, Number d){
        
        if(c.n < d.n){
            c.n += 10;
            d.n *= 2;
        }
        else{
            c.n *= 2;
            d.n += 1;
        }
    }
}