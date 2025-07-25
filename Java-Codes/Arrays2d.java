import java.util.Scanner;
public class Arrays2d
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.println("2D Array Approach-1");
		
		int[][] arr1 = new int[2][2];
		System.out.println("Enter Your Values: ");
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				arr1[i][j] = input.nextInt();
			}
		}
		System.out.println("Values are: ");
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
				System.out.print(arr1[i][j] + "  ");
			}System.out.println();
		}
		System.out.println();
		System.out.println();
		
		System.out.println("2D Array Approach-2");
		int[][] arr2 = new int[][] {{10,20},{30,40}};
		System.out.println("Values are: ");
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
			{
			System.out.print(arr2[i][j] + "   ");
		    }System.out.println();
		}
	}
}