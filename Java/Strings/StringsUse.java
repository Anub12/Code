package Strings;

public class StringsUse {
	public static void main(String[] args) {
		String st1 = "Anubhav";
		String st2 = "Robin";
		System.out.println(st1.compareTo(st2));
		System.out.println(st1.contains("hav"));
		System.out.println(st2.contains("in"));
		System.out.println(st1.contains(st2));
		System.out.println(st1.concat(st2));
		String st3 = st1.concat(st2);
		System.out.println(st3);
		st1 += st2;
		System.out.println(st1);
		System.out.println(st1.length());
		System.out.println(st1.charAt(6));
	}
}
