import java.util.Arrays;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        
        char[] charArray = str.toCharArray();
        Arrays.sort(charArray);


        String sortedString = new String(charArray);


        System.out.printf("%s " , sortedString);

        // Please write your code here.
    }
}