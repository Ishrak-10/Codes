using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Library_Management_System
{
    public class LibraryMember
    { 
        public string MemberId { get; set; }
        public string Name { get; set; }
        public string Department { get; set; }
        public int BorrowedBooks { get; set; }

        public virtual void ShowInfo()
        {
            Console.WriteLine($"Member Id: {MemberId}");
            Console.WriteLine($"Name: {Name}");
            Console.WriteLine($"Department: {Department}");
            Console.WriteLine($"Borrowed Books: {BorrowedBooks}");
        }
        public virtual void CheckLimitStatus()
        { }
    }

    public class StudentMember : LibraryMember
    {
        public int Semester { get; set; }
        public int MaximumAllowedBooks {  get; set; }

        public override void CheckLimitStatus()
        {
            if (MaximumAllowedBooks > BorrowedBooks)
            {
                Console.WriteLine("Within Limit");
            }
            else
            {
                Console.WriteLine("Over the Limit");
            }
        }

        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine($"Semester: {Semester}");
            Console.WriteLine($"Maximum Allowed Books: {MaximumAllowedBooks}");
            CheckLimitStatus();
            Console.WriteLine("---------------------------------------");
        }
    }

    public class FacultyMember : LibraryMember
    {
        public string Designation {  get; set; }
        public int ResearchAllowance {  get; set; }

        public override void CheckLimitStatus()
        {
            if (ResearchAllowance < 10000)
            {
                Console.WriteLine("Over the Limit");
            }
            else
            {
                Console.WriteLine("Within Limit");
            }
        }

        public override void ShowInfo()
        {
            base.ShowInfo();
            Console.WriteLine($"Designation: {Designation}");
            Console.WriteLine($"Reserch Allowence: {ResearchAllowance}");
            CheckLimitStatus();
            Console.WriteLine("---------------------------------------");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            StudentMember Student = new StudentMember
            {
                MemberId = "101",
                Name = "Ishrak",
                Department = "CSE",
                BorrowedBooks = 2,
                Semester = 5,
                MaximumAllowedBooks = 3,
            };

            FacultyMember Faculty = new FacultyMember
            {
                MemberId = "1001",
                Name = "Anik",
                Department = "CSE",
                BorrowedBooks = 4,
                Designation = "Lecturer",
                ResearchAllowance = 50000
            };

            Student.ShowInfo();
            Faculty.ShowInfo();
        }
    }
}
