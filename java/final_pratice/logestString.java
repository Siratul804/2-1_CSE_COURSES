import java.util.Scanner;

public class LongestStringFinder {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("How many strings? ");
            int count = sc.nextInt();
            sc.nextLine(); // consume newline

            String longest = "";
            for (int i = 1; i <= count; i++) {
                System.out.print("String " + i + ": ");
                String s = sc.nextLine();
                if (s.length() > longest.length()) {
                    longest = s;
                }
            }

            if (count > 0) {
                System.out.println("\nLongest string: " + longest);
            } else {
                System.out.println("\nNo strings entered.");
            }
        }
    }
}
