package arraylist;

import java.util.ArrayList;

public class ArrayListDemo {
	
	public static void main(String[] args) {
//		ArrayList<Integer> arr = new ArrayList<>();
		ArrayList<Integer> arr = new ArrayList<Integer>();
		arr.add(10);
		arr.add(20);
		arr.add(30);
		arr.add(1, 80);
		for(int i : arr) {
			System.out.print(i + " ");
		}
		Integer x = 10;
		arr.remove(x);
		arr.set(2, x);
		System.out.println(arr.size());
		for(int i=0; i<arr.size(); i++) {
			System.out.print(arr.get(i) + " ");
		}
		System.out.println();
		
		// enhanced for loop - for each loop
//		for(int i : arr) {
//			System.out.print(i + " ");
//		}
		
//		System.out.println();
//		ArrayList<String> arrlist = new ArrayList<String>();
//		arrlist.add("Anubhav");
//		arrlist.add("Robin");
//		arrlist.add("Sam");
//		arrlist.add("Vizag");
//		arrlist.add("single");
//		System.out.println("Size of String type arraylist: " + arrlist.size());
//		for(int i=0; i<arrlist.size(); i++) {
//			System.out.print(arrlist.get(i) + " ");
//		}
		
//		ArrayList<Integer> arr = new ArrayList<Integer>();
//		arr.add(10);  // {10, }
//		arr.add(20); // {10, 20}
//		arr.add(30); // {10, 20, 30}
//		arr.add(1, 80); // {10, 80, 20}
//		Integer x = 10; // x = 10
//		arr.remove(x); // {80, 20}
//		arr.set(2, x); // {80, 20, 10}
	}
}
