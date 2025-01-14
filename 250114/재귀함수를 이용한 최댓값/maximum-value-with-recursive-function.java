import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }


        int max = function(arr, n - 1);
        System.out.println(max);
    }

    public static int function(int[] arr, int index) {
        if (index == 0) {
            return arr[0];
        }

        int max = function(arr, index - 1);

        if(max > arr[index]){
            return max;
        }
        else{
            max = arr[index];
            return max;

        }
    }
}