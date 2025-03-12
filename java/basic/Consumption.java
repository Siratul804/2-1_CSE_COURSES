import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt(); // Read total distance traveled (in Km)
        double Y = sc.nextDouble(); // Read total fuel spent (in liters)

        double consumption = X / Y; // Calculate average consumption

        System.out.printf("%.3f km/l%n", consumption); // Print formatted output

        sc.close();
    }
}
