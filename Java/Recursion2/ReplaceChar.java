package Recursion2;

public class ReplaceChar {
	public static String replaceChar(String input, char c1, char c2) {
		if(input.length() == 0) {
			return "";
		}
		char c;
		if(input.charAt(0) == c1) {
			c = c2;
		}
		else {
			c = input.charAt(0);
		}
		
		String ans = replaceChar(input.substring(1), c1, c2);
		return (c + ans);
	}

	public static void main(String[] args) {
		String s = "abacadx";
		char c1 = 'a';
		char c2 = 'x';
		String output = replaceChar(s, c1, c2);
		System.out.print(output);
	}

}
