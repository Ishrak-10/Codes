import java.lang.*;

public abstract class Shape
{
	protected double value1;
	protected double value2;
	
	public Shape(){}
	
	public Shape(double value1, double value2)
	{
		this.value1=value1;
		this.value2=value2;
	}
	
	public abstract double getvalue1();
	public abstract double getvalue2();
	public abstract void displayArea();
}