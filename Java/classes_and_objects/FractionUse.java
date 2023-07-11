package classes_and_objects;
import classes_and_objects.Fraction;

public class FractionUse {

	public static void main(String[] args) {
		Fraction f1 = new Fraction(2, 3);
		f1.print();
		Fraction f2 = new Fraction(5, 3);
		f2.print();
		
		Fraction f3 = Fraction.add(f1, f2);
//		f3.simplify();
		f2.multiply(f3);
		
		
		f3.print();
	}

}
