import java.lang.*;

public class Start
{
	public static void main(String[] args)
	{
		Circle c = new Circle(7.0, 6.0);
		c.displayArea();
		
		Rectangle r = new Rectangle(7.0, 8.0);
		r.displayArea();
		
		Triangle t = new Triangle(8.0, 6.0);
		t.displayArea();
		
		Shape s = new Circle(67.0, 7.0);
		s.displayArea();
	}
}