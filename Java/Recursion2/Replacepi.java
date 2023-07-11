package Recursion2;

public class Replacepi {
//	public static String replacePi(String input) {
//		if(input.length() == 0) {
//			return "";
//		}
//		if(input.charAt(0) == 'p' && input.charAt(1) == 'i') {
//			return "3.14" + replacePi(input.substring(2));
//		}
//		return replacePi(input.substring(1));
//	}
	
//	public static String replacePi(String input) {
//		if(input.length() == 0) {
//			return "";
//		}
//		char c;
//		if(input.charAt(0) == 'p' && input.charAt(1) == 'i') {
//			return "3.14" + replacePi(input.substring(2));
//		}
//		else {
//			c = input.charAt(0);
//		}
//		return c + replacePi(input.substring(1));
//	}
	
	public static String replacePi(String input) {
		String output;
		if(input.length() <= 1) {
			return input;
		}
		String small = replacePi(input.substring(1));
		if(input.charAt(0) == 'p' && input.charAt(1) == 'i') {
			output = "3.14" + small.substring(1);
		}
		else {
			output = input.charAt(0) + small;
		}
		return output;
	}

	public static void main(String[] args) {
		String st = "pipixpixpixpiapibp";
		String ans = replacePi(st);
		System.out.println("The output is: " + ans);
	}

}
