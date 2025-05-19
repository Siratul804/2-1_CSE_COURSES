import java.util.Scanner;

public class ElectricityBillCalculator {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter units consumed: ");
            int units = sc.nextInt();

            double bill;
            if (units > 300) {
                bill = (units - 300) * 10 + 150 * 8 + 100 * 5 + 50 * 3;
            } else if (units > 150) {
                bill = (units - 150) * 8 + 100 * 5 + 50 * 3;
            } else if (units > 50) {
                bill = (units - 50) * 5 + 50 * 3;
            } else {
                bill = units * 3;
            }

            System.out.println("Total Bill: " + bill + " taka");
        }
    }
}
