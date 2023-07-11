package Recursion2;

public class RemoveX {
//	public static String removeX(String s) {
//		if(s.length() == 0) {
//			return "";
//		}
//		if(s.charAt(0) == 'x') {
//			return removeX(s.substring(1));
//		}
//		return s.charAt(0) + (s.substring(1));
//	}
	
	public static String removeX(String input) {
		if(input.length() == 0) {
			return "";
		}
		if(input.charAt(0) == 'x') {
			return removeX(input.substring(1));
		}
		return input.charAt(0) + removeX(input.substring(1));
	}
	
	public static void main(String[] args) {
		String s = "abxcxd";
		String st = removeX(s);
		System.out.println("The string is: " + st);
	}
}
