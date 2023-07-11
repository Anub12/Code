package classes_and_objects;

public class Student {
	public String name;
	// final data members can be initialized as soon as they are declared
	private final int rollNumber;
	
	
	static int numStudents;
//	public Student() {
//		rollNumber = 100;
//	}
	
//	public Student(String n) {
//		name = n;
//	}
	
	public static int getNumStudents() {
		return numStudents;
	}
	
	public Student(String name, int rollNumber) {
		this.name = name;
		this.rollNumber = rollNumber;
		numStudents++;
	}
	
//	public void setRollnumber(int rn) {
//		if(rn <= 0) {
//			return;
//		}
//		this.rollNumber = rn;
//	}
	
	public int getRollnumber() {
		return rollNumber;
	}
	
	public void print() {
		System.out.println(name + " : " + rollNumber);
	}
}
