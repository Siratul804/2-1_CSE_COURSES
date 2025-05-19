import java.util.Scanner;

public class LeapYearChecker {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a year: ");
            int year = sc.nextInt();

            boolean isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

            System.out.printf(
                "\nYear %d is %s leap year.%n",
                year,
                isLeap ? "a" : "not a"
            );
        }
    }
}
