// Simple custom exception
class InvalidVoltageException extends Exception {
     InvalidVoltageException(int max) {
        super("Invalid Voltage, voltage cannot be greater than" + max + "V");
    }
}

public class ExceptionDemo {
    // Checks voltage and throws if above limit
    static void check(int v, int max) throws InvalidVoltageException {
        if (v > max) {
            throw new InvalidVoltageException(max);
        }
        System.out.println("Voltage OK: " + v + "V");
    }

    public static void main(String[] args) {
        // First test
        try {
            check(220, 110);
        } catch (InvalidVoltageException e) {
            System.err.println("Error: " + e.getMessage());
        }

        // Second test
        try {
            check(100, 150);
        } catch (InvalidVoltageException e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}
