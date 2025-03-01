import java.util.Scanner;

class BombDisposal {
    String code;
    char color;
    int second;

    public BombDisposal(String code, char color, int second){
        this.code = code;
        this.color = color;
        this.second = second;

    } 
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String code = sc.next();
        char color = sc.next().charAt(0);
        int second = sc.nextInt();

        BombDisposal bd = new BombDisposal(code, color, second);


       System.out.println("code : " + bd.code);   
        System.out.println("color : " + bd.color);  
        System.out.println("second : " + bd.second);

    }
}