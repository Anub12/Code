package classes_and_objects;

public class Fraction {
	private int numerator;
	private int denomenator;
	
	public Fraction(int numerator, int denomenator) {
		this.numerator = numerator;
		if(numerator == 0) {
			// to do error
		}
		this.denomenator = denomenator;
		simplify();
	}
	
	public int getDenomenator() {
		return denomenator;
	}
	
	public int getNumerator() {
		return numerator;
	}
	
	public void setNumerator(int d) {
		if(d == 0) {
			// Todo error out
			return;
		}
		this.denomenator = d;
		this.simplify();
	}
	
	public void print() {
		if(denomenator == 1) {
			System.out.println(numerator);
		} else {
			System.out.println(numerator + "/" + denomenator);
		}
	}
	
	public void simplify() {
		int gcd = 1;
		int smaller = Math.min(numerator, denomenator);
		for(int i = 2; i <= smaller; i++) {
			if(numerator % i == 0 && denomenator % i == 0) {
				gcd = i;
			}
		}
		numerator = numerator/gcd;
		denomenator = denomenator/gcd;
	}
	
	public static Fraction add(Fraction f1, Fraction f2) {
		int newNum = f1.numerator * f2.denomenator + f2.numerator * f1.denomenator;
		int newDen = f1.denomenator * f2.denomenator;
		Fraction f = new Fraction(newNum, newDen);
		return f;
	}
	
	public void add(Fraction f2) {
		this.numerator = this.numerator * f2.denomenator + this.denomenator * f2.numerator;
		this.denomenator = this.denomenator * f2.denomenator;
		simplify();
	}
	
	public void multiply(Fraction f2) {
		this.numerator = this.numerator * f2.numerator;
		this.denomenator = this.denomenator * f2.denomenator;
		simplify();
	}
}
