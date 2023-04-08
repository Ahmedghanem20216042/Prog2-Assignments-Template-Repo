//Ahmed Ghanem
//202106042
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        NumberArray array = new NumberArray(n);
        for (int i = 0; i < n; i++) {
            array.set(i, sc.nextInt());
        }
        array.replacePositivesWithOne();
        array.replaceNegativesWithTwo();
        System.out.println(array);
    }
}

class NumberArray {
    private int[] array;

    public NumberArray(int size) {
        this.array = new int[size];
    }

    public int get(int index) {
        return array[index];
    }

    public void set(int index, int value) {
        array[index] = value;
    }

    public int getSize() {
        return array.length;
    }

    public void replacePositivesWithOne() {
        for (int i = 0; i < getSize(); i++) {
            if (get(i) > 0) {
                set(i, 1);
            }
        }
    }

    public void replaceNegativesWithTwo() {
        for (int i = 0; i < getSize(); i++) {
            if (get(i) < 0) {
                set(i, 2);
            }
        }
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < getSize(); i++) {
            sb.append(get(i)).append(" ");
        }
        return sb.toString();
    }
}

