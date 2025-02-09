import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int monthNumber = sc.nextInt(); // Read the month number

        // Create an array of month names
        String[] months = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        // Print the corresponding month
        System.out.println(months[monthNumber - 1]);

        sc.close();
    }
}
