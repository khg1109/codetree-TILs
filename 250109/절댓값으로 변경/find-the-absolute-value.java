import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();


        int[] array = new int[a];

        for(int i = 0; i < a; i++){
            array[i] = sc.nextInt();
        }

        function(array);

        for(int i = 0; i < a; i++){
            System.out.printf("%d ", array[i]);

        }
        // Please write your code here.
    }

    static void function(int[] array){

        for(int i = 0; i < array.length; i++){
            if(array[i] < 0){
                array[i] *= -1;
            }
        }
    }
}