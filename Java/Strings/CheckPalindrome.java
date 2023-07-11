package Strings;
import java.util.Scanner;

public class CheckPalindrome {
	public static boolean checkPalindrome(String st) {
		boolean output = false;
		int size = st.length();
		for(int i = 0, j = size-1; i < j; i++,j--) {
			if(st.charAt(i) == st.charAt(j)) {
				output = true;
			}
			else {
				output = false;
			}
		}
		return output;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String st = sc.next();
		boolean output = checkPalindrome(st);
		System.out.println("The output is: " + output);
		sc.close();
	}
}

// immutability in strings in java