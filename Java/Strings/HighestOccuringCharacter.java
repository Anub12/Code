package Strings;

public class HighestOccuringCharacter {
	public static char highestOccuringChar(String st) {
		int maxFrequency = 0;
		int[] arr = new int[256];
		for(int i = 0; i < arr.length; i++) {
			arr[i] = 0;
		}
		for(int i = 0; i < st.length(); i++) {
			++arr[st.charAt(i)];
			maxFrequency = Math.max(maxFrequency, arr[st.charAt(i)]);
		}
		char ans = '\0';
		for(int i = 0; i < st.length(); i++) {
			if(arr[st.charAt(i)] == maxFrequency) {
				ans = st.charAt(i);
				break;
			}
		}
		return ans;
	}
	
	public static void main(String[] args) {
		String st = "aabbcc";
		char output = highestOccuringChar(st);
		System.out.print("The output is: " + output);
	}

}
