import java.util.Scanner;

public class Start
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		
		
		Circle c1 = new Circle();
		System.out.println();
		System.out.println();
		
		System.out.print("Enter radius for Circle: ");
		double rad1 = input.nextDouble();
		c1.setRadius(rad1);
		System.out.println("Area is: " + c1.getArea());
		
		System.out.println();
		System.out.println();
		
		System.out.print("Enter radius for Circle: ");
		double rad2 = input.nextDouble();
		Circle c2 = new Circle(rad2);
		System.out.println("Area is: " + c2.getArea());
		
		System.out.println();
		System.out.println();
		
		
		
		Rectangle r1 = new Rectangle();
		System.out.println();
		System.out.println();
		
		System.out.print("Enter length for Rectangle: ");
		double len1 = input.nextDouble();
		r1.setLength(len1);
		System.out.print("Enter width for Rectangle: ");
		double wid1 = input.nextDouble();
		r1.setWidth(wid1);
		System.out.println("Area is: " + r1.getArea());
		
		System.out.println();
		System.out.println();
		
		System.out.print("Enter length for Rectangle: ");
		double len2 = input.nextDouble();
		System.out.print("Enter width for Rectangle: ");
		double wid2 = input.nextDouble();
		Rectangle r2 = new Rectangle(len2, wid2);
		System.out.println("Area is: " + r2.getArea());
		
		System.out.println();
		System.out.println();
		
		
		
		Triangle t1 = new Triangle();
		System.out.println();
		System.out.println();
		
		System.out.print("Enter height for Triangle: ");
		double ht1 = input.nextDouble();
		t1.setHeight(ht1);
		System.out.print("Enter base for Triangle: ");
		double bs1 = input.nextDouble();
		t1.setBase(bs1);
		System.out.println("Area is: " + t1.getArea());
		
		System.out.println();
		System.out.println();
		
		System.out.print("Enter height for Triangle: ");
		double ht2 = input.nextDouble();
		System.out.print("Enter base for Triangle: ");
		double bs2 = input.nextDouble();
		Triangle t2 = new Triangle(ht2, bs2);
		System.out.println("Area is: " + t2.getArea());
	}
}