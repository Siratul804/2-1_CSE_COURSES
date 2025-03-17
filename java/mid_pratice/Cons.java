public class Gadget {
    private String brand;
    private String model;
    private double price;

    // i) Constructor to initialize variables
    public Gadget(String brand, String model, double price) {
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    // ii) Methods
    public String getBrand() {
        System.out.println("Brand of the gadget: " + brand);
        return brand;
    }

    public void setPrice(double newPrice) {
        this.price = newPrice;
        System.out.println("Updated price: " + price);
    }

    public boolean isAffordable() {
        boolean affordable = price <= 1000;
        System.out.println("Gadget is affordable: " + affordable);
        return affordable;
    }

    // Example usage (you can add a main method for testing)
    public static void main(String[] args) {
        Gadget myGadget = new Gadget("TechTron", "X100", 899.99);

        myGadget.getBrand();
        myGadget.setPrice(1200.50);
        myGadget.isAffordable();
    }
}