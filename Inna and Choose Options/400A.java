import java.util.HashSet;
import java.util.Scanner;
import java.util.Vector;

public class Solution {
    public static void main (String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.nextLine();
        for(int i=0;i<n;i++){
            int[][] count=new int[12][13];
            String str=sc.nextLine();
            HashSet<Integer> V=new HashSet<>();
            for(int j=1;j<=12;j++) {
                if ((12%j) != 0) continue;
                int b = 12 / j;
                for (int k = 0; k < 12; k++) {
                    if (str.charAt(k) == 'X') {
                        count[k % b][j]++;
                        if (count[k % b][j] == j)
                            V.add(j);
                    }
                }
            }
            System.out.print(V.size());
            for(Integer a:V){
                System.out.print(" "+a+"x"+(12/a));
            }
            System.out.println();
        }

    }
}