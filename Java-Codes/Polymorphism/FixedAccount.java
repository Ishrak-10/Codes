import java.lang.*;

public class FixedAccount extends Account
{
	private int tenureYear;
	
	public void setTenureYear(int tenureYear){this.tenureYear = tenureYear;}
	public int getTenureYear(){return tenureYear;}
	
	@Override
	public void showDetails()
	{
		super.showDetails();
		System.out.println("Tenure Year: "+tenureYear);
	}
}