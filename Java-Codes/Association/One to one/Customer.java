public class Customer
{
	private String phoneNum;
	private Account account;
	
	public Customer(){System.out.print("");}
	public Customer(String phoneNum, Account account)
	{
		this.phoneNum = phoneNum;
		this.account = account;
	}
	
	public void setPhoneNum(String phoneNum) { this.phoneNum = phoneNum;}
	public void setAccount(Account account) { this.account = account;}
	
	public String getPhoneNum(){return phoneNum;}
	public Account getAccount(){return account;}
	
	public void showDetails()
	{
		System.out.println("Phone number is: " + phoneNum);
		System.out.println("Account number is: " + account.getAccountNum());
		System.out.println("Account holder name is: " + account.getHolderName());
		System.out.println("Accout balance is: " + account.getBalance());
		//account.showDetails();
	}
}