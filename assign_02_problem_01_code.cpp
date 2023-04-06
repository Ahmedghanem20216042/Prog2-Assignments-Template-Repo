//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);   // Creating a Scanner object to take user input
        int N = sc.nextInt();   // Taking input N from the user
 
        for (int i = 1; i <= N; i++) {   // Loop from 1 to N
            System.out.println(i);   // Print the current number i on a new line
        }
    }
}