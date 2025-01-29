import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine();


        String[] words = new String[n];


        for(int i = 0; i < n; i++){
            words[i] = sc.nextLine();
        }

        Arrays.sort(words);
        
        for(String word : words){
            System.out.println(word);
        }

        // Please write your code here.
    }
}   