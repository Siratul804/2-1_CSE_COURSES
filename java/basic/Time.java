import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt(); // Read the total duration in seconds

        int hours = N / 3600; // Convert to hours
        int minutes = (N % 3600) / 60; // Convert remaining seconds to minutes
        int seconds = N % 60; // Remaining seconds

        System.out.printf("%d:%d:%d%n", hours, minutes, seconds); // Print in the required format

        sc.close();
    }
}
