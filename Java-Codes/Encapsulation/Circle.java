public class Circle
{
	private double radius;
	
	public Circle()
	{
		System.out.println("Circle - Default Constructor");
	}
	public Circle(double radius)
	{
		this.radius = radius;
	}
	
	public void setRadius(double radius)
	{
		this.radius = radius;
	}
	public double getRadius()
	{
		return radius;
	}
	
	public double getArea()
	{
		return 3.1416*radius*radius;
	}
}