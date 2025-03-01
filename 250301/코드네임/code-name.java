import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class CodeName {
    String name;
    int score;

    public CodeName(String name, int score) {
        this.name = name;
        this.score = score;
    }

    
}


class ScoreComparator implements Comparator<CodeName> {
    @Override
    public int compare(CodeName a, CodeName b) {
        return a.score - b.score;  
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        CodeName[] cn = new CodeName[5];

   
        for (int i = 0; i < cn.length; i++) {
            String name = sc.next();
            int score = sc.nextInt();
            cn[i] = new CodeName(name, score);
        }

        sc.close();  


        Arrays.sort(cn, new ScoreComparator());

        System.out.println(cn[0].name + " " + cn[0].score);

    }
}