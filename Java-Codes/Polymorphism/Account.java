import java.lang.*;

public class Account
{
	private int accountNumber;
	private String accountHolderName;
	private double balance;
	
	public Account(){}

	public Account(int accountNumber, String accountHolderName, double balance)
	{
		this.accountNumber = accountNumber;
		this.accountHolderName = accountHolderName;
		this.balance = balance;
	}

	public void setAccountNumber(int accountNumber){this.accountNumber = accountNumber;}
	public void setAccountHolderName(String accountHolderName){this.accountHolderName = accountHolderName;}
	public void setBalance(double balance){this.balance = balance;}
	
	public int getAccountNum(){return accountNumber;}
	public String getAccountHolderName(){return accountHolderName;}
	public double getBalance(){return balance;}
	
	public void showDetails()
	{
		System.out.println("Account Number: " + accountNumber);
		System.out.println("Account Holder Name: " + accountHolderName);
		System.out.println("Balance: " + balance);
	}
}