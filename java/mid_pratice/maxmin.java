import java.util.Scanner;

public class SumOfMaxMin {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking three numbers as input
        System.out.print("Enter three integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        // Finding min and max using Math functions
        int min = Math.min(a, Math.min(b, c));
        int max = Math.max(a, Math.max(b, c));

        // Printing sum of max and min
        System.out.println("Sum of maximum and minimum: " + (max + min));

        scanner.close();
    }
}
