package Strings;

public class CheckPremutation {
//	public static boolean checkPermutation(String st1, String st2) {
//		boolean output = false;
//		if(st1.length() == 0 && st2.length() == 0) {
//			output = true;
//		}
//		for(int i = 0; i < st1.length(); i++) {
//			for(int j = 0; j < st2.length(); j++) {
//				if(st1.charAt(i) == st2.charAt(j) && st1.length() == st2.length()) {
//					output = true;
//				}
//			}
//		}
//		return output;
//	}
	
	public static boolean checkPermutation(String st1, String st2) {
		if(st1.length() != st2.length()) {
			return false;
		}
		int[] arr = new int[256];
		for(int i = 0; i < arr.length; i++) {
			arr[i] = 0;
		}
		for(int i = 0; i < st1.length(); i++) {
			char ch = st1.charAt(i);
			++arr[ch];
		}
		for(int i = 0; i < st2.length(); i++) {
			char ch = st2.charAt(i);
			--arr[ch];
		}
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] != 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) {
		String st1 = "**#$%";
		String st2 = "*#%$*";
		boolean output = checkPermutation(st1, st2);
		System.out.print("The output is: " + output);
	}

}
