package Strings;

public class stringComparison {
	@SuppressWarnings("unused")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str1 = "abc";
		String str2 = "abc";
		String str3 = new String("abc");
		if(str1 == str3) {
			System.out.println("Both are equal");
		} else {
			System.out.println("Both are not equal");
		}
		if(str1.equals(str3)) {
			System.out.println("Both are equal");
		} else {
			System.out.println("Both are not equal");
		}
		
//		int[] arr1 = {1,2};
//		int[] arr2 = {1,2};
//		if(arr1 == arr2) {
//			System.out.print("Both are equal");
//		}
//		else {
//			System.out.println("Both are not equal");
//		}
	}

}
