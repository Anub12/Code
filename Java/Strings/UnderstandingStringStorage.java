package Strings;

public class UnderstandingStringStorage {

	@SuppressWarnings("unused")
	public static void main(String[] args) {
		String str = "abc";
		String str1 = "abc";
		String str2 = new String("abc"); // This will make a new string in the string pool
		String str3 = "abc";
		// str, str1, str3 will be pointing to the same string
		// Only 1 string will be created instead of three different in the string pool
		// There will be total of 2 strings in the string pool
		str = "xyz";
		str1 = str1 + "def";
		str1.concat("xyz");
		System.out.println(str1);
//		str.setCharAt(i) = 'i';
	}
 // restore toolbar and icons in eclipse
}
