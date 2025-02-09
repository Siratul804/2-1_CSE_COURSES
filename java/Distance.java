import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int distance = sc.nextInt(); // Read the distance in km

        int time = distance * 2; // Each km takes 2 minutes

        System.out.println(time + " minutos"); // Print the output

        sc.close();
    }
}
