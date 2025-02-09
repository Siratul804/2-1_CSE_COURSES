public class Main {
    public static void main(String[] args) {
        // Loop through numbers from 1 to 100
        for (int i = 2; i <= 100; i += 2) {
            System.out.println(i); // Print even numbers
        }
    }
}
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int X = sc.nextInt(); // Read the integer X

        // Loop through numbers from 1 to X
        for (int i = 1; i <= X; i += 2) {
            System.out.println(i); // Print odd numbers
        }

        sc.close();
    }
}
