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

        swap(a, b);


        System.out.printf("%d %d", a.value, b.value);
        
    }

    static void swap(IntWrapper a, IntWrapper b){
        int temp = a.value;
        a.value = b.value;
        b.value = temp;

    }

}