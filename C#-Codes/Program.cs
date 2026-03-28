using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bank_Account_Management
{
    class BankAccount
    {
        private double balance;
        public string AccountNumber { get; set; }
        public string AccountHolderName { get; set; }

        protected string accountType;

        public void Deposit(double amount)
        {
            balance += amount;
            Console.WriteLine("Deposited: " + amount);
        }

        public void Withdraw(double amount)
        {
            if (amount > balance)
            {
                Console.WriteLine("Insufficient balance!");
            }
            else
            {
                balance -= amount;
                Console.WriteLine("Withdrawn: " + amount);
            }
        }

        public void DisplayBalance()
        {
            Console.WriteLine("Current Balance: " + balance);
        }

        class SavingsAccount : BankAccount
        {
            public SavingsAccount()
            {
                accountType = "Savings";
            }

            public void ShowAccountType()
            {
                Console.WriteLine("Account Type: " + accountType);
            }
        }

        internal class BankHelper
        {
            public void ShowBankMessage()
            {
                Console.WriteLine("Welcome to the Bank System!");
            }
        }

        class Program
        {
            static void Main(string[] args)
            {
                SavingsAccount acc = new SavingsAccount();

                acc.AccountNumber = "12345";
                acc.AccountHolderName = "Ayman";

                acc.Deposit(1000);
                acc.Withdraw(500);
                acc.DisplayBalance();
                acc.ShowAccountType();

                BankHelper helper = new BankHelper();
                helper.ShowBankMessage();

                Console.ReadLine();
            }
        }
    }
}

