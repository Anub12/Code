package Strings;
import java.util.Scanner;

public class ReverseString {
	public static String reverseString(String st) {
		String reversedString = "";
//		for(int i = st.length()-1; i >= 0; i--) {
//			reversedString += st.charAt(i);
//		}
		for(int i = 0; i < st.length(); i++) {
			reversedString = st.charAt(i) + reversedString;
		}
		return reversedString;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String output = reverseString(str);
		System.out.println("The output is: " + output);
		sc.close();
	}
}

// watch the video again