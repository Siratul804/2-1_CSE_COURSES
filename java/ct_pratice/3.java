// AirCooler class definition
class AirCooler {
    // Attributes (instance variables)
    private String model;
    private double capacity;
    private double temperature;

    // Constructor to initialize model and capacity
    public AirCooler(String model, double capacity) {
        this.model = model;
        this.capacity = capacity;
        this.temperature = 0.0; // Default temperature
    }

    // Method to start and set the temperature
    public void start(double cTemp) {
        this.temperature = cTemp;
    }

    // Method to increase temperature
    public void increaseTemperature(double amt) {
        this.temperature += amt;
    }

    // Method to decrease temperature
    public void decreaseTemperature(double amt) {
        this.temperature -= amt;
    }

    // Method to display all attributes
    public void display() {
        System.out.println("Model: " + model);
        System.out.println("Capacity: " + capacity + " Liters");
        System.out.println("Temperature: " + temperature + "°C");
    }
}

import java.util.Scanner; // Importing Scanner for user input

// House class containing the main method
public class House {
    public static void main(String[] args) {
        // Create an AirCooler object
        AirCooler myAirCooler = new AirCooler("General", 1.5);

        // Get registration ID from the user
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your registration ID: ");
        int regID = scanner.nextInt();

        // Extract required digits from regID
        double startTemp = regID % 1000 % 20; // Last 3 digits % 20
        int increaseAmt = (regID / 1000) % 10; // First digit of regID

        // Call the start method
        myAirCooler.start(startTemp);

        // Increase temperature
        myAirCooler.increaseTemperature(increaseAmt);

        // Display attributes
        myAirCooler.display();

        // Close the scanner
        scanner.close();
    }
}
