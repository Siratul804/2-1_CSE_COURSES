import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class SummaCumLaude {
    public static void main(String[] args) throws FileNotFoundException {
        try (Scanner in = new Scanner(new File("Convocation_2024.txt"))) {
            while (in.hasNext()) {
                String firstName = in.next();
                String lastName  = in.next();
                String regNo     = in.next();
                double cgpa      = in.nextDouble();

                if (cgpa >= 3.95) {
                    System.out.printf("%s %s %s %.2f%n",
                                      firstName, lastName, regNo, cgpa);
                }
            }
        }
    }
}

