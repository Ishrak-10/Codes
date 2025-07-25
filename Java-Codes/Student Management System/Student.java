public class Student extends Person
{
	protected String studentid;
	protected String major;
	
	public Student(){System.out.println();}
	public Student(String name, int age, String studentid, String major)
	{
		super(name, age);
		this.studentid = studentid;
		this.major = major;
	}
	public void setStudentid(String studentid){this.studentid = studentid;}
	public void setMajor(String major){this.major = major;}
	
	public String getStudentid(){return studentid;}
	public String getMajor(){return major;}
	
	@Override
	public void displayinfo()
	{
		super.displayinfo();
		System.out.println("Id: " + studentid);
		System.out.println("Major: " + major);
	}
}