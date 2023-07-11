package basics;
import java.util.Scanner;

public class Salary {
    public static void main(String args[]){
        int basic;
        char ch;
        Scanner s = new Scanner(System.in);
        basic = s.nextInt();
        ch = s.next().charAt(0);
        s.close();
        int hra = (20 * basic) / 100;
        int da = (50 * basic) / 100;
        int allow = 0;
        if(ch == 'A'){
            allow = 1700;
        }
        else if(ch == 'B'){
            allow = 1500;
        }
        else{
            allow = 1300;
        }
        int pf = (11 * basic) / 100;
        System.out.println("hra value is: " + hra);
        System.out.println("da value is: " + da);
        System.out.println("allow value is: " + allow);
        System.out.println("pf value is: " + pf);
        int totalSalary = basic + hra + da + allow - pf;
        System.out.println("The total Salary is: " + totalSalary);
    }
}
