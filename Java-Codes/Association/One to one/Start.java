public class Start
{
	public static void main(String[] args)
	{
		System.out.println();
		System.out.println("##### Account - 1 #####");
		System.out.println();
		Account a1 = new Account(123, "Anik", 10.5);
		Customer c1 = new Customer("123456789", a1);
		c1.showDetails();
		
		System.out.println();
		System.out.println("##### Account - 2 #####");
		System.out.println();
		Account a2 = new Account();
		a2.setAccountNum(100);
		a2.setHolderName("Kumar");
		a2.setBalance(500.5);
		
		Customer c2 = new Customer();
		c2.setPhoneNum("987654321");
		c2.setAccount(a2);
		
		System.out.println("Phone number is: " + c2.getPhoneNum());
		System.out.println("Account num is: " + c2.getAccount().getAccountNum());
		System.out.println("Account holder name is: " + c2.getAccount().getHolderName());
		System.out.println("Account balance is: " + c2.getAccount().getBalance());
	}
}