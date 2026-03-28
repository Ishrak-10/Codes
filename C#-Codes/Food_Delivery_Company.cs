using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Food_Delivery_Company
{
    public class Food
    {
        public string itemName { get; set; }
        public int basePrice = 50;

        public virtual void CalculatePrice()
        {
            Console.WriteLine($"Item Name: {itemName}");
            Console.WriteLine($"Base Price: {basePrice}");
        }
    }

    public class Pizza : Food
    {
        public int numberOfToppings { get; set; }

        public Pizza(string i, int t)
        {
            itemName = i;
            numberOfToppings = t;
        }

        public override void CalculatePrice()
        {
            base.CalculatePrice();
            Console.WriteLine($"Number of Toppings: {numberOfToppings}");
            Console.WriteLine($"Final Price: {basePrice + numberOfToppings * 50}");
            Console.WriteLine("-----------------------------------");
        }
    }

    public class Burger : Food
    {
        public bool extraChess { get; set; }

        public Burger(string i, bool e)
        {
            itemName = i;
            extraChess = e;
        }

        public override void CalculatePrice()
        {
            base.CalculatePrice();
            if (extraChess == true)
            {
                Console.WriteLine("Extra Chess : Yes");
                Console.WriteLine($"Final Price: {basePrice + 30}");
            }
            else
            {
                Console.WriteLine("Extra Chess : No");
                Console.WriteLine($"Final Price: {basePrice}");
            }
            Console.WriteLine("-----------------------------------");
        }
    }

    public class Drink : Food
    {
        public string size {  get; set; }

        public Drink(string i, string s)
        {
            itemName = i;
            size = s;
        }
        public override void CalculatePrice()
        {
            base.CalculatePrice();
            Console.WriteLine($"Size: {size}");
            if(size == "Medium")
            {
                Console.WriteLine($"Final Price: {basePrice + 20}");
            }
            else if(size == "Large")
            {
                Console.WriteLine($"Final Price: {basePrice + 40}");
            }
            else
            {
                Console.WriteLine($"Final Price: {basePrice}");
            }
            Console.WriteLine("-----------------------------------");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Food F1 = new Pizza("Pepperoni Pizza", 3);
            F1.CalculatePrice();

            Food F2 = new Burger("Chicken Burger", true);
            F2.CalculatePrice();

            Food F3 = new Drink("Pepsi", "Large");
            F3.CalculatePrice();
        }
    }
}
