import java.util.Scanner;



public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);
        int rowNum = sc.nextInt();
        int colNum = sc.nextInt();

        printRect(rowNum, colNum);
    }

    static void printRect(int rowNum,int colNum) {
        for(int i = 0; i < rowNum; i++){
            for(int j = 0; j < colNum; j++){
                System.out.print(1);
            }
            System.out.println();

        }
    }
}