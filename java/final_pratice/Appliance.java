abstract class Appliance {
    private String brand;
    private double price;
    private boolean isOn;

    public Appliance(String brand, double price) {
        brand = brand;
        price = price;
    }

    public void turnOn() {
        isOn = true;
        System.out.println(brand + " is now ON");
    }

    public abstract void display();
}

// AC subclass
class AC extends Appliance {
    private double capacity;
    private double currentTemperature = 25.0;

    public AC(String brand, double price, double capacity) {
        super(brand, price);
        this.capacity = capacity;
    }

    @Overload
    public void turnOn(double t) {
        super.turnOn();
        currentTemperature = t;
        System.out.println("Set temp to " + currentTemperature + "°C");
    }

    @Override
    public void display() {
        System.out.println(
            brand + " AC — $" + price +
            ", Capacity: " + btu + " BTU" +
            ", Temp: " + tempC + "°C"
        );
    }
}