 class Training {
     String title;
     String instructor;
     int capacity;
     int enrolledStudentCount;
     String cardKey; // Private String variable (for Q3)

    // Constructor to initialize attributes
     Training(String title, String instructor, int capacity) {
        this.title = title;
        this.instructor = instructor;
        this.capacity = capacity;
        this.enrolledStudentCount = 0; // Initially, no students are enrolled
    }

    // Method to register students
     void registerStudents(int studentCount) {
        if (enrolledStudentCount + studentCount > capacity) {
            enrolledStudentCount = capacity; // If over capacity, set to max
        } else {
            enrolledStudentCount += studentCount; // Otherwise, add students
        }
    }

    // Method to update instructor
     void updateInstructor(String newInstructor) {
        this.instructor = newInstructor;
    }

    // Method to get student count
     int getStudentCount() {
        return enrolledStudentCount;
    }

    // Method to display training details
     void display() {
        System.out.println("\nTraining Title: " + title);
        System.out.println("Instructor: " + instructor);
        System.out.println("Capacity: " + capacity);
        System.out.println("Enrolled Students: " + enrolledStudentCount);
    }
}


import java.util.Scanner;

public class UapTraining {
    public static void main(String[] args) {
        // Creating an object of Training class
        Training dataTraining = new Training("Data Science Bootcamp", "Labib", 60);

        Scanner scanner = new Scanner(System.in);
        
        // Taking input for registration ID
        System.out.print("Enter your registration ID: ");
        int registrationID = scanner.nextInt();

        // Get last digit of registration ID and add 2
        int lastDigit = registrationID % 10 + 2;

        // Get first digit of registration ID
        int firstDigit = Integer.parseInt(Integer.toString(registrationID).substring(0, 1));

        // Register students
        dataTraining.registerStudents(lastDigit);
        dataTraining.registerStudents(firstDigit);

        // Display details
        dataTraining.display();
    }
}
