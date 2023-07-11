package basics;
import java.util.Scanner;

public class Prime {
    public static void main(String args[]){
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.close();
        int div = 2;
        while(div <= n/2){
            if(n % div == 0){
                System.out.println("Composite");
                return;
            }
            div = div + 1;
        }
        System.out.println("Prime");
    }
}
