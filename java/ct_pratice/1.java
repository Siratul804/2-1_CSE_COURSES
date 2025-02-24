import java.util.Scanner;

public class FuelCalculator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter driver's name: ");
        String name = in.nextLine();

        System.out.print("Enter distance (km): ");
        double distance = in.nextDouble();

        System.out.print("Enter fuel (liters): ");
        double fuel = in.nextDouble();

        double efficiency = distance / fuel;
        String status = (efficiency > 20) ? "Excellent" : (efficiency >= 15) ? "Good" : (efficiency >= 10) ? "Average" : "Poor";

        System.out.printf("\nDriver: %s\nFuel Efficiency: %.2f km/l\nClassification: %s\n", name, efficiency, status);
        
        in.close();
    }
}
