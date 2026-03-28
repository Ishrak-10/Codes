using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Customer_Management
{
    class Customer
    {
        public int id;
        public string name;
        public string email;
        public string phone;

        public Customer(int i, string n, string e, string p)
        {
            this.id = i;
            this.name = n;
            this.email = e;
            this.phone = p;
        }

        public void Print()
        {
            Console.WriteLine("ID: " + id);
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Email: " + email);
            Console.WriteLine("Phone: " + phone);
            Console.WriteLine();
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Customer[] c = new Customer[10];
            int count = 0;
            int choice = 0;

            while (choice != 4)
            {
                Console.WriteLine("\nCustomer Management System");
                Console.WriteLine("1. Add New Customer");
                Console.WriteLine("2. Show All Customers");
                Console.WriteLine("3. Find Customer by ID");
                Console.WriteLine("4. Exit");
                Console.Write("Enter choice: ");

                choice = Convert.ToInt32(Console.ReadLine());

                if (choice == 1)
                {
                    Console.Write("Enter ID: ");
                    int id = Convert.ToInt32(Console.ReadLine());

                    Console.Write("Enter Name: ");
                    string name = Console.ReadLine();

                    Console.Write("Enter Email: ");
                    string email = Console.ReadLine();

                    Console.Write("Enter Phone: ");
                    string phone = Console.ReadLine();

                    c[count] = new Customer(id, name, email, phone);
                    count++;

                    Console.WriteLine("Customer Added!");
                }

                else if (choice == 2)
                {
                    for (int i = 0; i < count; i++)
                    {
                        c[i].Print();
                    }
                }

                else if (choice == 3)
                {
                    Console.Write("Enter ID to search: ");
                    int sid = Convert.ToInt32(Console.ReadLine());

                    for (int i = 0; i < count; i++)
                    {
                        if (c[i].id == sid)
                        {
                            c[i].Print(); 
                            break;
                        }
                    }
                }
            }
        }
    }
}
