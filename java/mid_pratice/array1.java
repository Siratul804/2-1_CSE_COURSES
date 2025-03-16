import java.util.Scanner;

public class ArrayCommonElements {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the size of the first array
        System.out.print("Enter the size of the first array: ");
        int size1 = scanner.nextInt();

        // Create the first array
        int[] array1 = new int[size1];

        // Get the elements of the first array
        System.out.println("Enter the elements of the first array:");
        for (int i = 0; i < size1; i++) {
            array1[i] = scanner.nextInt();
        }

        // Get the size of the second array
        System.out.print("Enter the size of the second array: ");
        int size2 = scanner.nextInt();

        // Create the second array
        int[] array2 = new int[size2];

        // Get the elements of the second array
        System.out.println("Enter the elements of the second array:");
        for (int i = 0; i < size2; i++) {
            array2[i] = scanner.nextInt();
        }

        // Find and print common elements
        findAndPrintCommonElements(array1, array2);

        scanner.close();
    }

    public static void findAndPrintCommonElements(int[] array1, int[] array2) {
        boolean commonElementFound = false;

        System.out.print("Common elements: ");
        for (int i = 0; i < array1.length; i++) {
            for (int j = 0; j < array2.length; j++) {
                if (array1[i] == array2[j]) {
                    System.out.print(array1[i] + " ");
                    commonElementFound = true;
                }
            }
        }

        if (!commonElementFound) {
            System.out.println("No common elements found.");
        }
    }
}