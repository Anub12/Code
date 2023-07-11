package Recursion2;

public class ReturnKeypad {
	
	public static String[] singleDigit(int n) {
		if(n<=1 || n>10) {
			System.exit(0);
		}
		if(n == 2) {
			String[] output = {"a", "b", "c"};
			return output;
		}
		if(n == 3) {
			String[] output = {"d", "e", "f"};
			return output;
		}
		if(n == 4) {
			String[] output = {"g", "h", "i"};
			return output;
		}
		if(n == 5) {
			String[] output = {"j", "k", "l"};
			return output;
		}
		if(n == 6) {
			String[] output = {"m", "n", "o"}; 
		}
		if(n == 7) {
			String[] output = {"p", "q", "r", "s"};
			return output;
		}
		if(n == 8) {
			String[] output = {"t", "u", "v"};
			return output;
		}
		else {
			String[] output = {"w", "x", "y", "z"};
			return output;
		}
	}
	
	public static String[] keypad(int n) {
		if(n == 0 || n == 1) {
			String[] output = {""};
			return output;
		}
		String smallerNumberArray[] = keypad(n/10);
		String singleDigitOutput[] = singleDigit(n%10);
		
		String[] output = new String[singleDigitOutput.length * smallerNumberArray.length];
		int k = 0;
		for(int a = 0; a < singleDigitOutput.length; a++) {
			for(int i = 0; i < smallerNumberArray.length; i++) {
				output[k] = smallerNumberArray[i] + singleDigitOutput[a];
				k++;
			}
		}
		return output;
	}
	
	// semester one software for flow diagrams creator of code

	public static void main(String[] args) {
		int n = 432;
		String[] output = keypad(n);
		for(int i = 0; i < output.length; i++) {
			System.out.println(output[i]);
		}
	}

}
