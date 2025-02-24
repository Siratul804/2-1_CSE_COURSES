import java.util.Arrays;
import java.util.Random;

public class ArrayOperations {
    public static void main(String[] args) {
        int[] numbers = new Random().ints(6, 30, 101).toArray(); 
        System.out.println("Array: " + Arrays.toString(number));

        Arrays.sort(numbers);
        double average = Arrays.stream(numbers).average().orElse(0); 

        System.out.println("Smallest number: " + numbers[0]);
        System.out.println("Second smallest number: " + numbers[1]);
        System.out.printf("Average: %.2f\n", average);
        System.out.println("Second smallest > Average: " + (numbers[1] > average));
    }
}
