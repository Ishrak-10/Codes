import java.lang.*;

public class Start
{
	public static void main(String[] args)
	{
		ScientificCalculator sc = new ScientificCalculator(10.0,20.0);
		System.out.println("Sum: " + sc.add());
		System.out.println("Sub: " + sc.subtract());
		System.out.println("Multiplay: " + sc.multiply());
		System.out.println("div: " + sc.divide());
		System.out.println("power: " + sc.toThePow());
	}
}