import java.util.ArrayList;
import java.util.Scanner;

class DengueTrackerSystem {
    class Dengue {
        int nid;
        String name;
        String age;
        String gender;
        boolean isAffected = false;

        Dengue(int nid, String name, String age, String gender) {
            this.nid = nid;
            this.name = name;
            this.age = age;
            this.gender = gender;
        }

        @Override
        public String toString() {
            return "NID: " + nid
                 + ", Name: " + name
                 + ", Age: " + age
                 + ", Gender: " + gender 
                 + ", isAffected: " + isAffected;
        }
    }

    ArrayList<Dengue> dengues = new ArrayList<>();
    Scanner input = new Scanner(System.in);

    void addPerson() {
        System.out.print("Nid: ");
        int nid = input.nextInt();
        
        input.nextLine(); 
        
        System.out.print("Name: ");
        String name = input.nextLine();
        
        System.out.print("Age: ");
        String age = input.nextLine();
        
         System.out.print("Gender: ");
        String gender = input.nextLine();

        dengues.add(new Dengue(nid, name, age, gender));
        System.out.println("Person added with their NID no. " + nid);
        
    }

    Dengue findPerson(int nid) {
        for (Dengue d : dengues) {
            if (d.nid == nid) return d;
        }
        return null;
    }

    void updatePersonAsInfectedByNID() {
        System.out.print("Enter person's NID: ");
        int nid = input.nextInt();
        input.nextLine(); 
        Dengue d = findPerson(nid);
        
        if(d != null) {
            d.isAffected = true;
            System.out.println("Person is maked as dengue effected.");
        }
    }
    
      void updatePersonAsRecovertedByNID() {
        System.out.print("Enter person's NID: ");
        int nid = input.nextInt();
        input.nextLine(); 
        Dengue d = findPerson(nid);
        
        if(d != null) {
            d.isAffected = false;
            System.out.println("Person is maked as dengue recoverted.");
        }
    }


    void viewPersonByNID() {
        System.out.print("Enter person's NID: ");
        int nid = input.nextInt();
        input.nextLine(); 
        Dengue d = findPerson(nid);
        
        System.out.println(d != null ? d : "No such persion. Please check the NID");
    }

    void listAllPerson() {
        if (dengues.isEmpty()) {
            System.out.println("No person is available.");
        } else {
            for (Dengue d : dengues) {
             System.out.println("ID: " + d.nid + ", Name: " + d.name + ", Age: " + d.age + ", Infected Status: " + d.isAffected);
            }
        }
    }


    void run() {
        while (true) {
            System.out.println("\n1) Add Person  2) Mark as Infected  3) Make as recovered  4) View by NID 5) View all person   0) Exit");
            System.out.print("Choice: ");
            String choice = input.nextLine();
            switch (choice) {
                case "1": addPerson(); break;
                case "2": updatePersonAsInfectedByNID(); break;
                case "3": updatePersonAsRecovertedByNID(); break;
                case "4": viewPersonByNID(); break;
                case "5": listAllPerson(); break;
                case "0": System.out.println("Goodbye!"); return;
                default: System.out.println("Invalid, try again.");
            }
        }
    }

    public static void main(String[] args) {
        new DengueTrackerSystem().run();
    }
}