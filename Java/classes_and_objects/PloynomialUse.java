package classes_and_objects;

public class PloynomialUse {

	public static void main(String[] args) {
		Polynomial p1 = new Polynomial();
		p1.setCoefficient(0, 3);
		p1.setCoefficient(2, 2);
		p1.print();
		System.out.println();
		
		Polynomial p2 = new Polynomial();
		p2.setCoefficient(0, 3);
		p2.setCoefficient(2, 2);
		p2.setCoefficient(1, 4);
		p2.setCoefficient(2, 5);
		p2.print();
		System.out.println();
		
		p1.add(p2);
		p1.print();
		System.out.println();
		p2.print();
		System.out.println();
		
		p2.multiply(p1);
		p1.print();
		System.out.println();
		p2.print();
		System.out.println();
	}

}
