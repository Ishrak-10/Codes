public class Triangle extends Shape
{
	private double base;
	
	public Triangle(){System.out.println("Triangle - Default constructor");}
	public Triangle(double height, double base)
	{
		super(height);
		this.base = base;
	}
	
	public void setHeight(double height){super.setValue(height);}
	public void setBase(double base){this.base = base;}
	
	public double getHeight(){return super.getValue();}
	public double getBase(){return base;}
	
	@Override
	public double getArea(){return 0.5*super.getValue()*base;}
}