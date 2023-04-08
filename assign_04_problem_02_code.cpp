//Ahmed Ghanem
//202106042
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        ArrayPrinter printer = new ArrayPrinter();
        printer.printElementsLessThanOrEqualTo(a, 10);
    }
}
 
class ArrayPrinter {
    public void printElementsLessThanOrEqualTo(int[] arr, int threshold) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] <= threshold) {
                System.out.println("A[" + i + "] = " + arr[i]);
            }
        }
    }
