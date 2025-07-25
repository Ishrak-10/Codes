import java.lang.*;

public class Customer
{
	private String phnNumber;
	private Account accounts[] = new Account[10];
	
	public Customer(){}
	public Customer(String phnNumber){this.phnNumber = phnNumber;}
	
	public void showAllAccounts()
	{
		System.out.println("Phn Number: "+phnNumber);
		for(int i=0; i<accounts.length; i++)
		{
			if(accounts[i] != null)
			{
				System.out.println("-----------------------");
				accounts[i].showDetails();
				System.out.println();
			}
		}
	}
	
	public void insertAccount(Account a)
	{
		int flag = 0, i;
		for(i=0; i<accounts.length; i++)
		{
			if(accounts[i] == null)
			{
				accounts[i] = a;
				flag = 1;
				break;
			}
		}
		if(flag == 1){System.out.println("Account " + accounts[i].getAccountNum() + " ---- Inserted");}
		else {System.out.println("Account " + a.getAccountNum() + " ---- Could Not Be Inserted");}
	}
	
	public void insertAccount(Account a, int index)
	{
		if(index>=0 && index<accounts.length)
		{
			if(accounts[index] == null)
			{
				accounts[index] = a;
				System.out.println("Account " + a.getAccountNum() + " ---- Inserted at index " + index);
			}
			else{System.out.println("Index " + index + " already occupied.");}
		}
		else{System.out.println("Invalid index.");}
	}
	
	public void removeAccount(Account a)
	{
		int flag = 0, i;
		for(i=0; i<accounts.length; i++)
		{
			if(accounts[i] == a)
			{
				accounts[i] = null;
				flag = 1;
				break;
			}
		}
		if(flag == 1){System.out.println("Account " + a.getAccountNum() + " ---- Removed");}
		else {System.out.println("Account " + a.getAccountNum() + " ---- Could Not Be Removed");}
	}
	
	public Account searchAccount(int accountNumber)
	{
		Account a = null;
		for(int i=0; i<accounts.length; i++)
		{
			if(accounts[i] != null)
			{
				if(accounts[i].getAccountNum() == accountNumber)
				{
					a = accounts[i];
					break;
				}
			}
		}
		return a;
	}
}




