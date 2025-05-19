import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class GradeCalculator {
    public static void main(String[] args) throws FileNotFoundException {
        try (
            Scanner in  = new Scanner(new File("Scores.txt"));
            PrintWriter out = new PrintWriter("Results.txt");
        ) {
            while (true) {
                try {
                    if (!in.hasNext()) break;
                    String id = in.next();
                    int a = in.nextInt();
                    int m = in.nextInt();
                    int f = in.nextInt();
                    int total = a + m + f;
                    char grade = total >= 90 ? 'A'
                                : total >= 80 ? 'B'
                                : total >= 70 ? 'C'
                                : total >= 60 ? 'D'
                                : 'F';
                    out.printf("%s %d %c%n", id, total, grade);
                } catch (Exception e) {
                    break;
                }
            }
        }
    }
}