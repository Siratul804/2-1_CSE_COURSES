import java.util.Scanner;

public class OutputFInd {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = scan.nextInt();
        int m = num;

        int n = --m + m++ - m-- + ++m + --num;
        // 127 + 127 - 128 + 128 + 127 = 
        System.out.println("m: " + m + ", n: " + n);
        System.out.println(n % 2);
    }
}

// output : 

// Enter the number: 128
// m: 128, n: 381
// 1