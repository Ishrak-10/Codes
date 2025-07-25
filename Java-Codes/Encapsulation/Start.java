public class Start
{
	public static void main(String[] args)
	{
		Rectangle r1 = new Rectangle();
		r1.setLength(4.4);
		System.out.println("Your entered length is: " + r1.getLength());
		r1.setWidth(10.5);
		System.out.println("Your entered width is: " + r1.getWidth());
		System.out.println("Area: " + r1.getArea());
		
		Circle c1 = new Circle();
		c1.setRadius(8.8);
		System.out.println("Your entered radius is: " + c1.getRadius());
		System.out.println("Area: " + c1.getArea());
		
		Rectangle r2 = new Rectangle(10.7, 5.5);
		System.out.println("Your entered length is: " + r2.getLength());
		System.out.println("Your entered width is: " + r2.getWidth());
		System.out.println("Area: " + r2.getArea());
		
		Circle c2 = new Circle(9.9);
		System.out.println("Your entered radius is: " + c2.getRadius());
		System.out.println("Area: " + c2.getArea());
	}
}