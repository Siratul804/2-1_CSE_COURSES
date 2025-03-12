class Car {
    String brand;
    int speed;

    // Default constructor calling another constructor
    Car() {
        this("Unknown", 0); // Calls the other constructor
    }

    // Parameterized constructor
    Car(String brand, int speed) {
        this.brand = brand;
        this.speed = speed;
    }

    void display() {
        System.out.println("Brand: " + brand + ", Speed: " + speed + " km/h");
    }
}

public class Main {
    public static void main(String[] args) {
        Car car1 = new Car(); // Calls the default constructor
        Car car2 = new Car("Honda", 150);

        car1.display(); // Output: Brand: Unknown, Speed: 0 km/h
        car2.display(); // Output: Brand: Honda, Speed: 150 km/h
    }
}
