package basics;

import java.util.Scanner;

public class Sum {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int i = 1, n, sum = 0;
        System.out.print("Enter number of Integers up-to which you want to calculate sum: ");
        n = s.nextInt();
        while(i <= n){
            sum += i;
            i = i + 1;
        }
        System.out.print("The sum of n numbers is: " + sum);
    }
}
