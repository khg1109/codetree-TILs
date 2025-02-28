import java.util.Scanner;


class NextLevel{
    String id;
    int Level;

    public NextLevel() {
        this.id = "codetree";
        this.Level = 10;
    }

    public NextLevel(String id, int Level) {
        this.id = id;
        this.Level = Level;
    } 
    
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String id = sc.next();
        int level = sc.nextInt();
        sc.close(); 

        NextLevel n1 = new NextLevel(); 
        NextLevel n2 = new NextLevel(id, level); 

        System.out.println("user " + n1.id + " lv " + n1.Level);
        System.out.println("user " + n2.id + " lv " + n2.Level);

       
    }
}