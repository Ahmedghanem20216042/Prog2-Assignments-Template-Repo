//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
 
        for (int i = N; i >= 1; i--) {   // Loop from N to 1
            for (int j = 1; j <= i; j++) {   // Loop from 1 to i
                System.out.print("*");   // Print an asterisk for each column
            }
            System.out.println();   // Move to the next line
        }
    }
}