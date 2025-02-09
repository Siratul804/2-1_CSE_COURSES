import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int startTime = sc.nextInt(); // Read the start time
        int endTime = sc.nextInt(); // Read the end time

        int duration;
        if (endTime > startTime) {
            duration = endTime - startTime; // If the end time is after the start time
        } else {
            duration = (24 - startTime) + endTime; // If the game crosses over midnight
        }

        // Print the result in the required format
        System.out.printf("O JOGO DUROU %d HORA(S)\n", duration);

        sc.close();
    }
}
