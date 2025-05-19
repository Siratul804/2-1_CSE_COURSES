import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileOperation {
    public static void main(String[] args) {
        String[] veg = { "alu", "potol", "begun", "tometo" };

        // Write to the file
        try (BufferedWriter writer = new BufferedWriter(new FileWriter("output.txt"))) {
            writer.write("Hello this is file writer");
            writer.newLine();
            writer.write("This is the new sentence");
            for (String v : veg) {
                writer.newLine();
                writer.write(v);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Read from the file
        try (BufferedReader reader = new BufferedReader(new FileReader("output.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}