package Strings;
import java.util.Scanner;

public class printAllChars {
	public static void printChars(String st) {
		for(int i = 0; i < st.length(); i++) {
			System.out.print(st.charAt(i));
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		printChars(str);
		sc.close();
	}
}
