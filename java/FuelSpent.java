import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int time = sc.nextInt(); // Read the spent time (hours)
        int speed = sc.nextInt(); // Read the average speed (km/h)

        int distance = time * speed; // Calculate total distance traveled
        double fuelNeeded = distance / 12.0; // Calculate fuel needed (12 km/L consumption)

        System.out.printf("%.3f%n", fuelNeeded); // Print result with 3 decimal places

        sc.close();
    }
}
