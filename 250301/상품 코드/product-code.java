import java.util.Scanner;
class ProductCode {
    String name;
    int code;

    public ProductCode(){
        this.name = "codetree";
        this.code = 50;

    }

    public ProductCode(String name, int code){
        this.name = name;
        this.code = code;

    }
}
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

    
        String name = sc.next();
        int code = sc.nextInt();


        ProductCode pc1 = new ProductCode();
        ProductCode pc2 = new ProductCode();
        
        pc2.name = name;
        pc2.code = code;



        System.out.println("product " + pc1.code + " is " + pc1.name);
        System.out.println("product " + pc2.code + " is " + pc2.name);
        
        // Please write your code here.
    }
}