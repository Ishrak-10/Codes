using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Structure
{
    public struct Teacher
    {
        public String name, id;
        public float salary;

        public Teacher(String n, String i, float s)
        {  
            name = n; 
            id = i; 
            salary = s; 
        }
        public void Print()
        {
            Console.WriteLine($"Name: {name}");
            Console.WriteLine($"Id: {id}");
            Console.WriteLine($"Salary: {salary}");
            Bonus(salary);
            Console.WriteLine("---------------------");
        }
        public void Bonus(float s)
        {
            if(s > 50000)
            {
                Console.WriteLine($"Bonus: {s * 0.5}");  
            }
            else
            {
                Console.WriteLine($"Bonus: {s * 0.25}");
            }
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Teacher T1 = new Teacher("Ishrak","101",80000);
            T1.Print();
            T1.Bonus(80000);

            Teacher T2 = new Teacher("Neymar", "102", 40000);
            T2.Print();
            T2.Bonus(40000);
        }
    }
}
