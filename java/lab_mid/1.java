import java.util.ArrayList;
import java.util.Scanner;

class BloodDonorSystem {
    static class Donor {
        int id;
        String name;
        int age;
        double weight;
        String bloodGroup;
        String lastDonationDate = "Not donated";

        Donor(int id, String name, int age, double weight, String bloodGroup) {
            this.id = id;
            this.name = name;
            this.age = age;
            this.weight = weight;
            this.bloodGroup = bloodGroup;
        }

        @Override
        public String toString() {
            return "ID: " + id
                 + ", Name: " + name
                 + ", Age: " + age
                 + ", Weight: " + weight + "kg"
                 + ", Blood Group: " + bloodGroup
                 + ", Last Donation: " + lastDonationDate;
        }
    }

    ArrayList<Donor> donors = new ArrayList<>();
    int nextId = 1;
    Scanner input = new Scanner(System.in);

    void addDonor() {
        System.out.print("Name: ");
        String name = input.nextLine();
        System.out.print("Age: ");
        int age = input.nextInt();
        input.nextLine(); 
        System.out.print("Weight (kg): ");
        double weight = input.nextDouble();
        input.nextLine(); 
        System.out.print("Blood Group: ");
        String bg = input.nextLine();

        donors.add(new Donor(nextId++, name, age, weight, bg));
        System.out.println("Donor added with ID " + (nextId - 1));
    }

    Donor findDonor(int id) {
        for (Donor d : donors) {
            if (d.id == id) return d;
        }
        return null;
    }

    void recordDonation() {
        System.out.print("Enter Donor ID: ");
        int id = input.nextInt();
        input.nextLine(); 
        Donor d = findDonor(id);
        if (d != null) {
            System.out.print("Enter donation date (dd-mm-yyyy): ");
            d.lastDonationDate = input.nextLine();
            System.out.println("Recorded donation for ID " + id);
        } else {
            System.out.println("No donor with ID " + id);
        }
    }

    void viewDonor() {
        System.out.print("Enter Donor ID: ");
        int id = input.nextInt();
        input.nextLine(); 
        Donor d = findDonor(id);
        System.out.println(d != null ? d : "Donor not found.");
    }

    void listAll() {
        if (donors.isEmpty()) {
            System.out.println("No donors available.");
        } else {
            for (Donor d : donors) {
                System.out.println("ID " + d.id + ": " + d.name);
            }
        }
    }

    void run() {
        while (true) {
            System.out.println("\n1) Add Donor  2) Record Donation  3) View Donor  4) List All  0) Exit");
            System.out.print("Choice: ");
            String choice = input.nextLine();
            switch (choice) {
                case "1": addDonor(); break;
                case "2": recordDonation(); break;
                case "3": viewDonor(); break;
                case "4": listAll(); break;
                case "0": System.out.println("Goodbye!"); return;
                default: System.out.println("Invalid, try again.");
            }
        }
    }

    public static void main(String[] args) {
        new BloodDonorSystem().run();
    }
}
