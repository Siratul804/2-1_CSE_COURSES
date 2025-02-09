import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int ageInDays = sc.nextInt(); // Read the age in days

        int years = ageInDays / 365; // Calculate the number of years
        int remainingDays = ageInDays % 365; // Remaining days after extracting years
        int months = remainingDays / 30; // Calculate the number of months
        int days = remainingDays % 30; // Remaining days after extracting months

        // Print the result in the required format
        System.out.printf("%d ano(s)\n", years);
        System.out.printf("%d mes(es)\n", months);
        System.out.printf("%d dia(s)\n", days);

        sc.close();
    }
}
