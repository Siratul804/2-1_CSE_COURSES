import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class PassFail {
    public static void main(String[] args) throws FileNotFoundException {
        try (Scanner in = new Scanner(new File("FinalScores.txt"))) {
            while (in.hasNext()) {
                String id    = in.next();    // student ID
                int score    = in.nextInt(); // score out of 100
                char result  = score >= 40 ? 'P' : 'F';
                System.out.printf("%s %c%n", id, result);
            }
        }
    }
}