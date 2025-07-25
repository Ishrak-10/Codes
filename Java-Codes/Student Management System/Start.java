import java.util.Scanner;
public class Start
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		Graduatestudent s1 = new Graduatestudent();
		System.out.println("Student 1");
		System.out.print("Name: ");
		String nam1 = input.nextLine();
		s1.setName(nam1);
		System.out.print("Student ID: ");
		String id1 = input.nextLine();
		s1.setStudentid(id1);
		System.out.print("Major: ");
		String mj1 = input.nextLine();
		s1.setMajor(mj1);
		System.out.print("Research Topic: ");
		String rt1 = input.nextLine();
		s1.setResearchTopic(rt1);
		System.out.print("Advisor Name: ");
		String an1 = input.nextLine();
		s1.setAdvisorName(an1);
		System.out.print("Age: ");
		int age1 = input.nextInt();
		s1.setAge(age1);
		
		System.out.print();
		
		Graduatestudent s2 = new Graduatestudent();
		System.out.println("Student 2");
		System.out.print("Name: ");
		String nam2 = input.nextLine();
		s2.setName(nam2);
		System.out.print("Student ID: ");
		String id2 = input.nextLine();
		s2.setStudentid(id2);
		System.out.print("Major: ");
		String mj2 = input.nextLine();
		s2.setMajor(mj2);
		System.out.print("Research Topic: ");
		String rt2 = input.nextLine();
		s2.setResearchTopic(rt2);
		System.out.print("Advisor Name: ");
		String an2 = input.nextLine();
		s2.setAdvisorName(an2);
		System.out.print("Age: ");
		int age2 = input.nextInt();
		s1.setAge(age2);
		
		Graduatestudent[] obj = new Graduatestudent[2];
		obj[0] = s1;
		obj[1] = s2;
		for(int i=0; i<2; i++)
		{
			System.out.println(obj[i].displayinfo());
		}
		
	}
}