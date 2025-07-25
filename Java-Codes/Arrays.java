import java.util.Scanner;
public class Arrays
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.println("1D Array Approach-1");
		
		int arr1[] = new int[5];
		System.out.println("Enter 1st Array values");
		for(int i=0; i<5; i++)
		{
			arr1[i] = input.nextInt();
		}
		System.out.print("Values are: ");
		for(int i=0; i<5; i++)
		{
			System.out.print(arr1[i] + "   ");
		}
		System.out.println();
		
		
		System.out.println("1D Array Approach-2");
		int arr2[] = new int[] {10,20,30,40,50};
		System.out.print("Values are: ");
		for(int i=0; i<5; i++)
		{
			System.out.print(arr2[i] + "   ");
		}
		System.out.println();
		
		
		System.out.println("1D Array Approach-3");
		System.out.println("Enter Array size: ");
		int size = input.nextInt();
		int arr3[] = new int[size];
		System.out.println("Enter 3rd Array values");
		for(int i=0; i<size; i++)
		{
			arr3[i] = input.nextInt();
		}
		System.out.print("Values are: ");
		for(int i=0; i<size; i++)
		{
			System.out.print(arr3[i] + "   ");
		}
		
	}
}