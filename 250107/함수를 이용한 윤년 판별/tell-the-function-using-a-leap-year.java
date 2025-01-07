import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        //if(isLeapYaer()){
            System.out.println(isLeapYaer(n))
;        //}


        // Please write your code here.
    }

    static boolean isLeapYaer(int n){
        return (n % 4 == 0) && !((n % 100 == 0) && (n % 400 != 0));
    } 
}