// Defining a class named Car
class Car {
    // Properties (attributes)
    String brand;
    int speed;

    // Method to display car details
    void display() {
        System.out.println("Brand: " + brand);
        System.out.println("Speed: " + speed + " km/h");
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating an object of the Car class
        Car myCar = new Car();
        myCar.brand = "Toyota";
        myCar.speed = 120;

        // Calling a method on the object
        myCar.display();
    }
}
