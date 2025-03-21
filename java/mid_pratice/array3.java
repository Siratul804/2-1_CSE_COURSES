import java.util.Arrays;

public class ArrayOperations {
    public static void main(String[] args) {
        
        int[] numbers = { 2, 3,1};

        
        System.out.println("Array: " + Arrays.toString(numbers));

        
        Arrays.sort(numbers);
        
        double average = Arrays.stream(numbers).average().orElse(0);

        System.out.println("Array: " + Arrays.toString(numbers));

        System.out.println("Average: " + average);
        
        System.out.println("Smallest number: " + numbers[0]);
        System.out.println("Second smallest number: " + numbers[1]);
    }
}
