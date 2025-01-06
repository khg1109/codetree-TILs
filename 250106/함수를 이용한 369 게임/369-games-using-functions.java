import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int cnt = 0;


        for(int i = a; i <= b; i++){
            if( find369(i)){
                cnt++;
            }
        }
        System.out.printf("%d", cnt);

        // Please write your code here.
    }
    static boolean find369(int i){
        return i % 3 == 0 || find(i);
    }   

    static boolean find(int i){
        
        while(i > 0){
            int digit = i % 10;

            if(digit == 3 || digit == 6 || digit == 9){
                return true;
            }

            i /= 10;
        }
        return false;
        

    }
}