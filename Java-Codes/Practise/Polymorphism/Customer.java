import java.lang.*;

public class Customer
{
	private String name;
	private String phoneNumber;
	private Vehicle vehicles[] = new Vehicle[10];
	
	public Customer(){}
	public Customer(String name, String phoneNumber)
	{
		this.name = name;
		this.phoneNumber = phoneNumber;
	}
	
	public void addVehicle(Vehicle v)
	{
		int i, flag = 0;
		for(i=0; i<10; i++)
		{
			if(vehicles[i] == null)
			{
				vehicles[i] = v;
				flag = 1;
				break;
			}
			
		}
		if(flag == 1){System.out.println("Vehicle " + vehicles[i].getModel() + " ---- Inserted");}
		else {System.out.println("vehicle " + v.getModel() + " ---- Could Not Be Inserted");}
	}
	
	public void showAllVehicle()
	{
		System.out.println("Customer Name: " + name);
		System.out.println("Phone Number: " + phoneNumber);
		for(int i=0; i<10; i++)
		{
			if(vehicles[i] != null)
			{
				System.out.println("-------------------------");
				vehicles[i].showDetails();
				System.out.println();
			}
		}
	}
	
	public Vehicle searchVehicle(String model)
	{
		Vehicle v = null;
		for(int i=0; i<10; i++)
		{
			if(vehicles[i] != null)
			{
				if(vehicles[i].getModel() == model)
				{
					v = vehicles[i];
					break;
				}
			}
		}
		return v;
	}
}