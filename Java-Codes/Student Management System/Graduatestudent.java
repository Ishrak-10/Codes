public class Graduatestudent extends Student
{
	protected String researchTopic;
	protected String advisorName;
	
	public Graduatestudent(){System.out.println();}
	public Graduatestudent(String name, int age, String studentid, String major, String researchTopic,
	String advisorName)
	{
		super(name, age, studentid, major);
		this.researchTopic = researchTopic;
		this.advisorName = advisorName;
	}
	
	public void setResearchTopic(String researchTopic){this.researchTopic = researchTopic;}
	public void setAdvisorName(String advisorName){this.advisorName = advisorName;}
	
	public String getResearchTopic(){return researchTopic;}
	public String getAdvisorName(){return advisorName;}
	
	@Override
	public void displayinfo()
	{
		super.displayinfo();
		System.out.println("Research Topic: " + researchTopic);
		System.out.println("Advisor Name: " + advisorName);
	}
}