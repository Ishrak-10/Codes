public class Vehicle
{
	private String brand;
	private double speed;
	
	public Vehicle(){System.out.println();}
	public Vehicle(String brand, double speed)
	{
		this.brand = brand;
		this.speed = speed;
	}
	
	public void setBrand(String brand){this.brand = brand;}
	public void setSpeed(double speed){this.speed = speed;}
	
	public String getBrand(){return brand;}
	public double getSpeed(){return speed;}
	
	public void showCarDetails()
	{
		System.out.println("Brand: " + brand);
		System.out.println("Speed: " + speed + " km/h");
	}
}