//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
 
        for (int i = 1; i <= N; i++) {
            // Print spaces
            for (int j = 1; j <= N - i; j++) {
                System.out.print(" ");
            }
 
            // Print asterisks
            for (int j = 1; j <= i * 2 - 1; j++) {
                System.out.print("*");
            }
 
            // Move to the next line
            System.out.println();
        }
    }
}
