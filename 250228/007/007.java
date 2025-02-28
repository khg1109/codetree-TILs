import java.util.Scanner;


class A007{
    String code;
    String Point;
    int time;


    public A007(String code, String Point, int time){
        this.code = code;
        this.Point = Point;
        this.time = time;
    }
};

public class Main {
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);


        String code = sc.next();
        String Point = sc.next();
        int time = sc.nextInt();

        A007 n = new A007(code, Point, time);

        System.out.println("secret code : " + n.code);
        System.out.println("meeting point : " + n.Point);
        System.out.println("time : " + n.time);
        

    }
}