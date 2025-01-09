import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String a = sc.next();

        if(function(a)){
            System.out.printf("No");
        }else{
            System.out.printf("Yes");

        }
        // Please write your code here.
    }


    static boolean function(String a){
        char ch = a.charAt(0);

        for(int i = 1; i < a.length(); i++){
            if((ch != a.charAt(i))){
                return false;
            }
        }
        return true;
    }
}