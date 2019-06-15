import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector<Integer> tab = new Vector();
        int j = 1, n = sc.nextInt();
        int k = sc.nextInt();
        long count = 0;
        sc.nextLine();
        for (int i = 0; i < n ; i++) {
            tab.add(sc.nextInt());
        }
        Collections.sort(tab);
        int curr = tab.get(0);

        for (; j < n; j++) {
            if(((tab.get(j) - curr) % k) != 0) {
                System.out.println(-1);
                break;
            }
            count += (tab.get(j) - curr) / k;
        }
        if(j == n) {
            System.out.println(count);
        }
    }
}