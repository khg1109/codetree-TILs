import java.util.Scanner;

class IntWrapper{
    int value;

    public IntWrapper(int value){
        this.value = value;
    }
}

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        IntWrapper a = new IntWrapper(n);
        IntWrapper b = new IntWrapper(m);

        function(a, b);


        System.out.printf("%d %d", a.value, b.value);
        
    }

    static void function(IntWrapper a, IntWrapper b){

        if(a.value < b.value){
            a.value *= 2;
            b.value += 25;
        }
        else{
            b.value *= 2;
            a.value += 25;
        }    
    }

}