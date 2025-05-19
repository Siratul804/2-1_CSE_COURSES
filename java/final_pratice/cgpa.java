// Base abstract class
abstract class Student {
    // Each subclass defines its own max CGPA
    public abstract double getHighestCgpa();
}

// Undergrad with 4.0 max CGPA
class Undergraduate extends Student {
    @Override
    public double getHighestCgpa() {
        return 4.0;
    }
}

// Grad with 5.0 max CGPA
class Graduate extends Student {
    @Override
    public double getHighestCgpa() {
        return 5.0;
    }
}

// Demo class
public class UAPDemo {
    public static void main(String[] args) {
        Student ug = new Undergraduate();
        Student g  = new Graduate();

        System.out.println("Undergraduate Student Highest CGPA: " + ug.getHighestCgpa());
        System.out.println("Graduate Student Highest CGPA: "    + g.getHighestCgpa());
    }
}
