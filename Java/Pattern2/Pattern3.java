package Pattern2;
import java.util.Scanner;

public class Pattern3 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while(i <= n) {
            int j = 1;
            while(j <= n-i+1){
                System.out.print(i);
                j++;
            }
            while(j <= n-i){
                System.out.print(" ");
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
