package random;

import java.util.Scanner;

class addition {
    int a, b;

    void add() {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter two Integers: ");
        a = s.nextInt();
        b = s.nextInt();
        int add = a + b;
        System.out.println("Addition: " + add);
    }
}

class subtraction extends addition {

    void sub() {
        int sub = a - b;
        System.out.println("Subtraction: " + sub);

    }
}

public class first {
	@SuppressWarnings("unused")
    public static void main(String[] args) {
        subtraction obj = new subtraction();
        obj.add();
        obj.sub();
    }
}
