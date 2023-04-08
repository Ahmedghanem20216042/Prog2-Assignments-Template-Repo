//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            int sum = 0;
            int count = 0;
            
            while (count < y) {
                if (x % 2 != 0) {
                    sum += x;
                    count++;
                }
                x++;
            }
            
            System.out.println(sum);
        }
        
        sc.close();
    }
}