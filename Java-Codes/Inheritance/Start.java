public class Start
{
	public static void main(String[] args)
	{
		Circle c1 = new Circle();
		c1.setRadius(2.5);
		System.out.println("Your entered radius is: " + c1.getRadius());
		System.out.println("Area is: " + c1.getArea());
		
		Rectangle r1 = new Rectangle();
		r1.setLength(5.5);
		r1.setWidth(7.7);
		System.out.println("Your entered length is: " + r1.getLength());
		System.out.println("Your entered width is: " + r1.getWidth());
		System.out.println("Area is: " + r1.getArea());
		
		Circle c2 = new Circle(4.4);
		System.out.println("Your entered radius is: " + c2.getRadius());
		System.out.println("Area is: " + c2.getArea());
		
		Rectangle r2 = new Rectangle(3.3, 6.7);
		System.out.println("Your entered length is: " + r2.getLength());
		System.out.println("Your entered width is: " + r2.getWidth());
		System.out.println("Area is: " + r2.getArea());
	}
}