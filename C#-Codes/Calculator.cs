using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double x;
            double y;
            char z;

            Console.Write("Please Enter the First Number: ");
            x = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please Enter the second Number: ");
            y = Convert.ToDouble(Console.ReadLine());

            Console.Write("Please Enter the Desire Operator: ");
            z = Convert.ToChar(Console.ReadLine());

            if(z == '+')
            {
                Console.WriteLine($"Answer = {x + y}");
            }

            else if (z == '-')
            {
                Console.WriteLine($"Answer = {x - y}");
            }

            else if (z == '*')
            {
                Console.WriteLine($"Answer = {x * y}");
            }

            else if (z == '/')
            {
                Console.WriteLine($"Answer = {x / y}");
            }
            else
            {
                Console.WriteLine("Invalid Oparetor");
            }
        }
    }
}
