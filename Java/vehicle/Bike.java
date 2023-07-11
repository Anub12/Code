package vehicle;

// This package is totally on Inheritance

public class Bike extends Vehicle{
	private int gears;
	private int tyre_size;
	private String engine_type_cc;
	private String color;

	public int get_gears() {
		return gears;
	}
	
	public void set_gears(int g) {
		gears = g;
	}
	
	public int get_tyre_size() {
		return tyre_size;
	}
	
	public void set_tyre_size(int t_size) {
		tyre_size = t_size;
	}
	
	public String get_engine_type() {
		return engine_type_cc;
	}
	
	public void  set_engine_type(String s) {
		engine_type_cc = s;
	}
	
	public String get_color() {
		return color;
	}
	
	public void set_color(String s) {
		color = s;
	}
	
	public void print() {
		System.out.println("Gears: " + get_gears());
		System.out.println("Tyre Size(in inches): "+ get_tyre_size());
		System.out.println("Engine: " + get_engine_type());
		System.out.println("Color" + get_color());
	}
	
}
