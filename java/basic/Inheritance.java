// Parent Class
class Animal {
    void makeSound() {
        System.out.println("Animals make sounds");
    }
}

// Child Class (inherits from Animal)
class Dog extends Animal {
    void bark() {
        System.out.println("Dog barks");
    }
}

// Main Class
public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.makeSound(); // Inherited from Animal
        myDog.bark();      // Defined in Dog class
    }
}
