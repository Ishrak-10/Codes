import java.lang.*;

public class Start
{
public static void main(String[] args)
{
	AdvancedIngridientCalculator a1= new AdvancedIngridientCalculator(10.0,20.0);
	System.out.println("Sum :"+a1.add());
	System.out.println("Sub :"+a1.subtract());
	System.out.println("Multiply :"+a1.multiply());
	System.out.println("Divide :"+a1.divide());
	System.out.println("Power:"+a1.exponentialScale());
}
}