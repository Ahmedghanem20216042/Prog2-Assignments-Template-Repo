//Ahmed Ghanem
//202106042

import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
 
        for (int i = 0; i < T; i++) {
            int X = sc.nextInt();
 
            if (isPrime(X)) {
                System.out.println("Prime");
            } else {
                System.out.println("Not");
            }
        }
    }
 
    // Helper function to check if a number is prime
    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
 
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
 
        return true;
    }
}
