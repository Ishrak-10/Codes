import java.lang.*;

public class BasicIngridientCalculator implements IIngridientCalculation
{
	protected double ingridient1;
	protected double ingridient2;
	
	public BasicIngridientCalculator(){ }
	public BasicIngridientCalculator (double ingridient1, double ingridient2)
	{
		this.ingridient1 = ingridient1;
	    this.ingridient2 = ingridient2;
	}
	public void setIngridient1(double ingridient1)
	{this.ingridient1=ingridient1;}
	public void setIngridient2( double ingridient2)
	{this.ingridient2=ingridient2;}
	
	public double getIngridient1()
	{return ingridient1;}
	public double getIngridient2()
	{return ingridient2;}
	
	public double add()
	{return this.ingridient1+this.ingridient2;}
	public double subtract()
	{return this.ingridient1-this.ingridient2;}
	public double multiply()
	{return this.ingridient1*this.ingridient2;}
	public double divide()
	{return this.ingridient1/this.ingridient2;}
}
	
	