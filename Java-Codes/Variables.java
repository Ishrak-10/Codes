public class Variables
{
	public int insvar = 100;
	
	public static int classvar = 200;
	
	public static void main(String[] args)
	{
		for(int i=0; i<5; i++)
		{
			System.out.print(i + "  ");
		}
		System.out.println();
		
		Variables v = new Variables();
		System.out.println(v.insvar);
		System.out.println(v.classvar);
	}
}