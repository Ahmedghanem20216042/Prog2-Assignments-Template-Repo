//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
 
        int a = 0, b = 1;
        for (int i = 1; i <= N; i++) {
            System.out.print(a + " ");
 
            // Compute the next Fibonacci number
            int c = a + b;
            a = b;
            b = c;
        }
    }
}
