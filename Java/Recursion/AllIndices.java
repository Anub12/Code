package Recursion;

public class AllIndices {
	public static int[] allIndices(int[] input, int x, int startIndex) {
		if(startIndex == input.length) {
			int output[] = new int[0];
			return output;
		}
		int[] smallOutput = allIndices(input,x,startIndex+1);
		if(input[startIndex] == x) {
			int output[] = new int[smallOutput.length+1];
			output[0] = startIndex;
			for(int i = 0; i < smallOutput.length; i++) {
				output[i+1] = smallOutput[i];
			}
			return output;
		}
		else {
			return smallOutput;
		}
	}
	
	public static void main(String[] args) {
		int[] arr = {1,2,3,3,4,3,5};
		int x = 3;
		int[] output = new int[3];
		output = allIndices(arr,x,0);
		for(int i = 0; i < output.length; i++) {
			System.out.print(output[i] + " ");
		}
	}

}


// Last day of recursion tomorrow
