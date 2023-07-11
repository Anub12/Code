package basics;
import java.util.Scanner;

public class Loops {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int i=1, n;
        System.out.print("Enter number of times you want to print 'Hello': ");
        n = s.nextInt();
        while(i <= n){
            System.out.println("Hello");
            i = i + 1;
        }
        s.close();
    }
}
