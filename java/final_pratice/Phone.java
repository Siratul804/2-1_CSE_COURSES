// Base abstract class
abstract class Phone {
    protected String maker;
    protected int storageGB, batterymAh;

    public Phone(String maker, int storage, int battery) {
        this.maker = maker;
        this.storageGB = storage;
        this.batterymAh = battery;
    }

    public void call(String to) {
        System.out.println("Calling " + to);
    }

    public void sendMessage(String to, String msg) {
        System.out.println("[" + to + "] " + msg);
    }

    public abstract void displayDetails();
}

// Simple interface
interface SmartDevice {
    void runApp(String app);
}

// Concrete smartphone class
class SmartPhone extends Phone implements SmartDevice {
    private String os;

    public SmartPhone(String maker, int storage, int battery, String os) {
        super(maker, storage, battery);
        this.os = os;
    }

    @Override
    public void runApp(String app) {
        System.out.println("Launching " + app);
    }

    // Default call
    @Override
    public void call(String to) {
        System.out.println("Default call to " + to);
        super.call(to);
    }

    // Call via an app
    public void call(String to, String viaApp) {
        runApp(viaApp);
        System.out.println("Calling " + to + " via " + viaApp);
        super.call(to);
    }

    @Override
    public void displayDetails() {
        System.out.println(
            maker + " Smartphone | " +
            storageGB + "GB | " +
            batterymAh + "mAh | OS: " + os
        );
    }
}

// Demo
public class PhoneDemo {
    public static void main(String[] args) {
        SmartPhone phone = new SmartPhone("Samsung", 128, 4500, "Android");

        phone.displayDetails();
        System.out.println();

        phone.call("123-456-7890");
        System.out.println();

        phone.call("987-654-3210", "WhatsApp");
        System.out.println();

        phone.sendMessage("555-1212", "Hello!");
    }
}
