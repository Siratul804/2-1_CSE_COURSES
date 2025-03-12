class MathOperations {
    // Method to add two numbers
    int add(int a, int b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        MathOperations obj = new MathOperations();
        int result = obj.add(10, 20);
        System.out.println("Sum: " + result);
    }
}
