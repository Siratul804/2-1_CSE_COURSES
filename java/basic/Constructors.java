class Car {
    String brand;
    int speed;

    // Constructor to initialize values
    Car(String b, int s) {
        brand = b;
        speed = s;
    }

    void display() {
        System.out.println("Brand: " + brand);
        System.out.println("Speed: " + speed + " km/h");
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating objects using constructor
        Car car1 = new Car("Honda", 150);
        Car car2 = new Car("Ford", 180);

        car1.display();
        car2.display();
    }
}
