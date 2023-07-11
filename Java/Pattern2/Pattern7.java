package Pattern2;
import java.util.Scanner;

// diamond shape

public class Pattern7 {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int firstHalf = (n + 1) / 2;
        int secondHalf = n / 2;

        // first half
        int i = 1;
        while(i <= firstHalf){
            int spaces = 1;
            while(spaces <= (firstHalf - i)){
                System.out.print(" ");
                spaces += 1;
                i++;
            }

            int j = 1;
            while(j <= (2 * i) - 1){
                System.out.print("*");
                j++;
            }
        }

        // seocnd half
        i = secondHalf;
        while(i >= 1){
            int spaces = 1;
            while(spaces <= (secondHalf - i + 1)){
                System.out.print(" ");
                spaces += 1;
            }
            int j = 1;
            while(j <= (2 * i) - 1){
                System.out.print("*");
                j++;
            }

            System.out.println();
            i -= 1;
        }
    }
}
