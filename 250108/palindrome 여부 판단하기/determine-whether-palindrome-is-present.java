import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

    
        String inputString = sc.next();

        String reversedString = reverseString(inputString);


        if (inputString.equals(reversedString)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

    static String reverseString(String inputString) {
        String reversed = "";
        
        for (int i = 0; i < inputString.length(); i++) {
            reversed = inputString.charAt(i) + reversed;
        }

        return reversed;
    }
}