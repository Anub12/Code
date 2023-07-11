package Pattern2;

import java.util.Scanner;

public class Pattern6 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while(i <= n){
            int spaces = 1;
            while(spaces <= (n - i)){
                System.out.print(" ");
                spaces += 1;
            }
            int j = 1;
            int val = i;
            while(j <= i){
                System.out.print(val);
                val++;
                j++;
            }
            j = 1;
            val = 2 * i  - 2;
            while(j <= i - 1){
                System.out.print(val);
                val -= 1;
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
