import java.util.Scanner;

public class ArraySumAverage {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("How many numbers? ");
            int n = sc.nextInt();

            int sum = 0;
            for (int i = 1; i <= n; i++) {
                System.out.print("Number " + i + ": ");
                sum += sc.nextInt();
            }

            double avg = (n > 0) ? (double) sum / n : 0;
            System.out.println("\nSum: " + sum);
            System.out.printf("Average: %.2f%n", avg);
        }
    }
}
