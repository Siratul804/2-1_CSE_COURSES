import java.util.Scanner;

public class BMICalculator {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your name: ");
            String name = sc.nextLine();

            System.out.print("Enter height (m): ");
            double h = sc.nextDouble();

            System.out.print("Enter weight (kg): ");
            double w = sc.nextDouble();

            double bmi = (h > 0) ? w / (h * h) : -1;
            String category;
            if (bmi < 0) {
                category = "Invalid height";
            } else if (bmi < 18.5) {
                category = "Underweight";
            } else if (bmi < 25) {
                category = "Normal";
            } else if (bmi < 30) {
                category = "Overweight";
            } else if (bmi < 35) {
                category = "Obesity I";
            } else if (bmi < 40) {
                category = "Obesity II";
            } else {
                category = "Obesity III";
            }

            System.out.printf(
                "\nHello, %s!%nYour BMI is %.2f%nCategory: %s%n",
                name, bmi, category
            );
        }
    }
}
