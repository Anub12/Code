package vehicle;

public class VehicleUse {
	
	public static void main(String[] args) {
		Vehicle v = new Vehicle();
		v.print();
		
		Car c = new Car();
		c.numGears = 5;
		c.color = "Black";
		c.setMaxSpeed(100);
		c.print();
		
		Bike b = new Bike();
		b.set_gears(5);
		b.set_color("Red");
		b.set_tyre_size(22);
		b.set_engine_type("150 cc");
		b.print();
	}
}
