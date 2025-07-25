public class SportsCar extends Car
{
	private boolean turbo;
	
	public SportsCar(){System.out.println();}
	public SportsCar(String brand, double speed, String fuelType, boolean turbo)
	{
		super(brand, speed, fuelType);
		this.turbo = turbo;
	}
	
	public void setTurbo(boolean turbo){this.turbo = turbo;}
	public boolean getTurbo(){return turbo;}
	
	@Override
	public void showCarDetails()
	{
		super.showCarDetails();
		if(turbo == true){System.out.println("Turbo mode: Enabled");}
		else{System.out.println("Turbo mode: Disabled");}
		
	}
}