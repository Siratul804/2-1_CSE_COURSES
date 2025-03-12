import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read input values A, B, and C
        double A = sc.nextDouble();
        double B = sc.nextDouble();
        double C = sc.nextDouble();

        double pi = 3.14159;

        // Calculate the required areas
        double triangle = (A * C) / 2; // Right-angled triangle area
        double circle = pi * Math.pow(C, 2); // Circle area
        double trapezium = ((A + B) * C) / 2; // Trapezium area
        double square = B * B; // Square area
        double rectangle = A * B; // Rectangle area

        // Print results with proper formatting
        System.out.printf("TRIANGULO: %.3f%n", triangle);
        System.out.printf("CIRCULO: %.3f%n", circle);
        System.out.printf("TRAPEZIO: %.3f%n", trapezium);
        System.out.printf("QUADRADO: %.3f%n", square);
        System.out.printf("RETANGULO: %.3f%n", rectangle);

        sc.close();
    }
}
