import java.lang.*;

public class Start
{
	public static void main(String args[])
	{
		Customer c = new Customer("+988877655544");
		
		Account a1 = new Account();
		a1.setAccountHolderName("ASD");
		a1.setAccountNumber(1111);
		a1.setBalance(20000.0);
		//a1.showDetails();
		
		Account sa1 = new SavingsAccount();
		sa1.setAccountHolderName("QWE");
		sa1.setAccountNumber(1112);
		sa1.setBalance(21000.0);
		((SavingsAccount)sa1).setInterestRate(10.5);
		//sa1.showDetails();
		
		Account fa1 = new FixedAccount();
		fa1.setAccountHolderName("MNO");
		fa1.setAccountNumber(1113);
		fa1.setBalance(22000.0);
		((FixedAccount)fa1).setTenureYear(10);
		//fa1.showDetails();
		
		System.out.println();
		c.insertAccount(a1);
		c.insertAccount(a1, 0);
		c.insertAccount(sa1);
		c.insertAccount(fa1);	

		System.out.println();		
		c.showAllAccounts();
		
		System.out.println("/////////////////////");
		c.removeAccount(sa1);
		
		System.out.println();
		c.showAllAccounts();
		
		System.out.println("/////////////////////");
		SavingsAccount sa2 = new SavingsAccount();
		sa2.setAccountHolderName("PQR");
		sa2.setAccountNumber(1114);
		sa2.setBalance(2000.0);
		sa2.setInterestRate(7.5);
		
		System.out.println();
		c.insertAccount(sa2);
		c.showAllAccounts();
		
		if(c.searchAccount(1113) != null){System.out.println("Exists");}
		else{System.out.println("Snapped");}
	}
}