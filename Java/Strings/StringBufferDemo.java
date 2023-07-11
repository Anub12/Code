package Strings;

public class StringBufferDemo {

	public static void main(String[] args) {
		StringBuffer str = new StringBuffer("bbc");
		str.setCharAt(0, 'a');
		str.append("def");
		System.out.println(str + " " + str.length());
		
		String s = "d";
		for(int i = 0; i < 5; i++) {
			s = s + 'z';
		}
	}

}
