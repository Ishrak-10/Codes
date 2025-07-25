public class Start
{
	public static void main(String[] args)
	{
		SportsCar car1 = new SportsCar();
		
		car1.setBrand("Ferrari");
		car1.setSpeed(250);
		car1.setFuelType("Petrol");
		car1.setTurbo(true);
		car1.showCarDetails();
		
		System.out.println();
		System.out.println();
		
		SportsCar car2 = new SportsCar("Tesla", 322, "Electric", false);
		car2.showCarDetails();
	}
}