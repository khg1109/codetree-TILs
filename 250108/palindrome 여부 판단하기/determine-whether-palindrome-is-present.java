import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String a = sc.next();

        String a2 = function(a);

        // Please write your code here.
    }

    static String function(String a){
        String str = "";
        for(int i = 0; i < a.length(); i++){
            str = a.charAt(i) + str;
            
        }   
        System.out.printf("%s", str);

        return "";
    }


}