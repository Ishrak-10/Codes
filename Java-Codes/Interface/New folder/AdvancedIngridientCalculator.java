import java.lang.*;
public class AdvancedIngridientCalculator extends BasicIngridientCalculator implements IAdvancedIngridientCalculation
{
	public AdvancedIngridientCalculator(){super();}
	public AdvancedIngridientCalculator (double ingridient1, double ingridient2)
	{super(ingridient1,ingridient2);}
	public double exponentialScale()
	{return Math.pow(this.ingridient1,this.ingridient2);}
}