package Strings;

public class RemoveConsecutiveDuplicates {
//	public static String removeConsecutiveDuplicates(String st) {
//		String ans = "";
//		for(int i = 0; i < st.length(); i++) {
//			for(int j = 0; j < st.length(); j++) {
//				if(st.charAt(i) == st.charAt(j) && i != j) {
//					ans += st.charAt(i);
//				}
//			}
//		}
//		return ans;
//	} This is an approach for removing duplicates.
	
	public static String removeConsecutiveDuplicates(String str) {
		String ans = "";
		int i = 0;
		int n = str.length();
		while(i < n) {
			char ch = str.charAt(i);
			int a = i+1;
			while(a < n && str.charAt(a) == ch) {
				a += 1;
			}
			ans += ch;
		}
		return ans;
	}

	public static void main(String[] args) {
		String st = "aaaaaa";
		String output = removeConsecutiveDuplicates(st);
		System.out.println(output);
	}
	// This code is not working
}
