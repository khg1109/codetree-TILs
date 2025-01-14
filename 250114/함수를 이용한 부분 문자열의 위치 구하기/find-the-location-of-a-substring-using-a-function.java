import java.util.Scanner;

public class Main {

    public static String word;
    public static String word2;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        word = sc.nextLine();   
        word2 =  sc.nextLine();

        System.out.printf("%d" ,function());
    }

    public static int function(){

        for(int i = 0; i < word.length(); i++){
            if(word.charAt(i) == word2.charAt(0)){

                int c = i;
                for(int j = 0; j < word2.length(); j++){
                    

                    if(c >= word.length() ||word.charAt(c) != word2.charAt(j)){
                        
                        break;
                    }
                    if(j >=  word2.length()- 1){
                        return i;
                    }
                    c++;

                }
            }

        }
        return -1;
    }

}