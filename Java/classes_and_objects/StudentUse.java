package classes_and_objects;

import java.util.Scanner;

public class StudentUse {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Student s1 = new Student("Anubhav", 4);
		s1.print();
//		s1.name = "Anubhav";
//		s1.rollNumber = 4;
		
		Student s2 = new Student("Robin", 38);
		s2.print();
		
//		System.out.println(s1.numStudents);
//		System.out.println(s2.numStudents);
		System.out.println(Student.getNumStudents());
//		System.out.println(s1.getNumStudents());
//		s2.name = "Robin";
//		s2.rollNumber = 38;
//		System.out.println(s1.name + " " + s1.rollNumber);
//		System.out.println(s2.name + " " + s2.rollNumber);
		
	}

}
// upto video 4 OOPS-1