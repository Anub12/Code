package Pattern1;
import java.util.Scanner;

public class Pattern2 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while(i <= n){
            int j = 1;
            while(j <= n){
//                System.out.print(i);
//                System.out.print(j);
                System.out.print(n+1-j);
                j = j + 1;
            }
            System.out.println();
            i = i + 1;
        }
    }
}
