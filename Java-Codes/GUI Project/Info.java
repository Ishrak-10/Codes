public class Info
{
	private String m1, m2, m3, m4;
	private int totalPrice;
	private String ticketType;

	public Info(String m1, String m2, String m3, String m4, String ticketType)
	{
		this.m1 = (m1 == null || m1.trim().isEmpty()) ? "0" : m1.trim();
		this.m2 = (m2 == null || m2.trim().isEmpty()) ? "0" : m2.trim();
		this.m3 = (m3 == null || m3.trim().isEmpty()) ? "0" : m3.trim();
		this.m4 = (m4 == null || m4.trim().isEmpty()) ? "0" : m4.trim();
		this.ticketType = ticketType;
	}

	public String getM1() { return m1; }
	public String getM2() { return m2; }
	public String getM3() { return m3; }
	public String getM4() { return m4; }

	public int getTotalPrice()
	{
		int m1Price = ticketType.equals("VIP") ? 400 : 200;
		int m2Price = ticketType.equals("VIP") ? 360 : 180;
		int m3Price = ticketType.equals("VIP") ? 440 : 220;
		int m4Price = ticketType.equals("VIP") ? 500 : 250;
		
		totalPrice = (Integer.parseInt(m1) * m1Price) +
		             (Integer.parseInt(m2) * m2Price) +
		             (Integer.parseInt(m3) * m3Price) +
		             (Integer.parseInt(m4) * m4Price);
		return totalPrice;
	}
}