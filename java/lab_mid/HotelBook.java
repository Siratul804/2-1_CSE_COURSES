import java.util.ArrayList;
import java.util.Scanner;

class HotelBookSystem {
    class Hotel {
        int id;
        String name;
        String rank;
        int positive = 0;
        int negative = 0;

        Hotel(int id, String name, String rank) {
            this.id = id;
            this.name = name;
            this.rank = rank;
        }

        @Override
        public String toString() {
            return "ID: " + id
                 + ", Name: " + name
                 + ", Rank: " + rank
                 + ", Positive: " + positive 
                 + ", negative: " + negative;
        }
    }

    ArrayList<Hotel> hotels = new ArrayList<>();
    int nextId = 0;
    Scanner input = new Scanner(System.in);

    void addHotel() {
        System.out.print("Name: ");
        String name = input.nextLine();
        
        System.out.print("Rank: ");
        String rank = input.nextLine();

        hotels.add(new Hotel(++nextId, name, rank));
        System.out.println("Hotel added with ID " + nextId);
        
    }

    Hotel findHotel(int id) {
        for (Hotel h : hotels) {
            if (h.id == id) return h;
        }
        return null;
    }

    void viewHotelByID() {
        System.out.print("Enter Hotel ID: ");
        int id = input.nextInt();
        input.nextLine(); 
        Hotel h = findHotel(id);
        System.out.println(h != null ? h : "Hotel not found.");
    }

    void listAllHotel() {
        if (hotels.isEmpty()) {
            System.out.println("No hotels available.");
        } else {
            for (Hotel h : hotels) {
             System.out.println("ID: " + h.id + ", Name: " + h.name + ", Rank: " + h.rank + ", Positive Review: " + h.positive + ", Negative Review: " + h.negative);


            }
        }
    }
    
    
  void addReview() {
    System.out.print("Enter Hotel ID: ");
    int id = input.nextInt();
    input.nextLine(); 
    Hotel h = findHotel(id);
    
    if(h != null) {
        System.out.println("\n1) Positive Review  2) Negative Review\n");
        System.out.print("Choice: ");
        String choice = input.nextLine();
        
        if(choice.equals("1")){
            System.out.print("Positive Review Point (out of 5): ");
            int point = input.nextInt();
            input.nextLine(); // clear buffer
            h.positive += point;
        } else if (choice.equals("2")) {
            System.out.print("Negative Review Point (our of 5) : ");
            int point = input.nextInt();
            input.nextLine(); // clear buffer
            h.negative += point;
        } else {
            System.out.println("Invalid review choice.");
        }
    } else {
        System.out.println("Hotel not found.");
    }
}


    void run() {
        while (true) {
            System.out.println("\n1) Add Hotel  2) View HotelById  3) View All Hotels  4) Add Review  0) Exit");
            System.out.print("Choice: ");
            String choice = input.nextLine();
            switch (choice) {
                case "1": addHotel(); break;
                case "2": viewHotelByID(); break;
                case "3": listAllHotel(); break;
                case "4": addReview(); break;
                case "0": System.out.println("Goodbye!"); return;
                default: System.out.println("Invalid, try again.");
            }
        }
    }

    public static void main(String[] args) {
        new HotelBookSystem().run();
    }
}