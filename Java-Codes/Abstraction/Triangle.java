import java.lang.*;

public class Triangle extends Shape
{
	public Triangle(){super();}
	public Triangle(double value1, double value2){super(value1, value2);}
	
	public void setvalue1(double value1){this.value1=value1;}
	public void setvalue2(double value2){this.value2=value2;}
	
	public double getvalue1(){return this.value1;}
	public double getvalue2(){return this.value2;}
	
	public void displayArea()
	{
		System.out.println("Area of the Triangle is: "+(0.5*(this.value1*this.value2)));
	}
}