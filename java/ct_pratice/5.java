public class Training {
    private String title;
    private String instructor;
    private int capacity;
    private int enrolledStudentCount;
    private final String cardKey; // Private String variable (Q3)

    // Constructor to initialize attributes
    public Training(String title, String instructor, int capacity) {
        this.title = title;
        this.instructor = instructor;
        this.capacity = capacity;
        this.enrolledStudentCount = 0; // Initially, no students are enrolled
        this.cardKey = "Secret123"; // Example private key, can't be accessed outside
    }

    // Method to register students
    public void registerStudents(int studentCount) {
        if (enrolledStudentCount + studentCount > capacity) {
            enrolledStudentCount = capacity; // If over capacity, set to max
        } else {
            enrolledStudentCount += studentCount; // Otherwise, add students
        }
    }

    // Method to update instructor
    public void updateInstructor(String newInstructor) {
        this.instructor = newInstructor;
    }

    // Method to get student count
    public int getStudentCount() {
        return enrolledStudentCount;
    }

    // Method to display training details
    public void display() {
        System.out.println("\nTraining Title: " + title);
        System.out.println("Instructor: " + instructor);
        System.out.println("Capacity: " + capacity);
        System.out.println("Enrolled Students: " + enrolledStudentCount);
    }
}
