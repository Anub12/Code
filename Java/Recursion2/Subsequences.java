package Recursion2;

public class Subsequences {
	
	public static String[] findSubsequences(String str) {
		if(str.length() == 0) {
			String ans[] = {""};
			return ans;
		}
		
		String smallAns[] = findSubsequences(str.substring(1));
		String ans[] = new String[2 * smallAns.length];
		
		int k = 0;
		for(int i = 0; i < smallAns.length; i++) {
			ans[k] = smallAns[i];
			k++;
		}
		
		for(int i = 0; i < smallAns.length; i++) {
//			ans[i + smallAns.length] = str.charAt(0) + smallAns[i];
			ans[k] = str.charAt(0) + smallAns[i];
			k++;
		}
		
		return ans;
	}

	public static void main(String[] args) {
		String st = "xyz";
		String output[] = findSubsequences(st);
		for(int i = 0; i < output.length; i++) {
			System.out.println(output[i]);
		}
	}
	// Do this question again dry run
}
