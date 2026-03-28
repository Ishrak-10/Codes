using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Vehicle
{
    public class Vehicle
    {
        private string vehicleName;
        public string VehicleName
        {
            get { return vehicleName; }
            set { vehicleName = value; }
        }
        private string vehicleId;
        public string VehicleId
        {
            get { return vehicleId; }
            set { vehicleId = value; }
        }
        public static int VehicleCount = 0;

        public Vehicle()
        {
            VehicleName = "Unknown";
            VehicleId = "000";
            VehicleCount++;
        }

        public virtual void Status()
        {
            Console.WriteLine("Vehicle Status: Generic Vehicle");
        }

        public virtual void ShowInfo()
        {
            Console.WriteLine($"Vehicle Name: {VehicleName}");
            Console.WriteLine($"Vehicle Id: {VehicleId}");
        }
    }

    public class Motorbike : Vehicle
    {
        public Motorbike()
        {
            VehicleName = "Motorbike";
            VehicleId = "001";
            VehicleCount++;
        }
        public override void Status()
        {
            Console.WriteLine("Status: Motorbike");
        }
        public override void ShowInfo()
        {
            Console.WriteLine($"Vehicle Name: {VehicleName}");
            Console.WriteLine($"Vehicle Id: {VehicleId}");
        }
    }

    public class Truck : Vehicle
    {
        public Truck()
        {
            VehicleName = "Truck";
            VehicleId = "010";
            VehicleCount++;
        }
        public override void Status()
        {
            Console.WriteLine("Status: Truck");
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
        }
    }

    public class Car : Vehicle
    {
        public Car()
        {
            VehicleName = "Car";
            VehicleId = "100";
            VehicleCount++;
        }
        public override void Status()
        {
            Console.WriteLine("Status: Car");
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
        }
    }

    public class Saloon : Car
    {
        public Saloon()
        {
            VehicleName = "Car";
            VehicleId = "200";
            VehicleCount++;
        }
        public override void Status()
        {
            Console.WriteLine("Status: Saloon");
        }
        public override void ShowInfo()
        {
            base.ShowInfo();
        }

        public class MPV : Car
        {
            public MPV()
            {
                VehicleName = "Car";
                VehicleId = "300";
                VehicleCount++;
            }
            public override void Status()
            {
                Console.WriteLine("Status: MPV");
            }
            public override void ShowInfo()
            {
                base.ShowInfo();
            }
        }
        internal class Program
        {
            static void Main(string[] args)
            {
                Vehicle Obj1 = new Motorbike();
                Vehicle Obj2 = new Truck();
                Vehicle Obj3 = new Car();
                Vehicle Obj4 = new Saloon();
                Vehicle Obj5 = new MPV();

                Obj1.Status();
                Obj1.ShowInfo();

                Obj2.Status();
                Obj2.ShowInfo();

                Obj3.Status();
                Obj3.ShowInfo();

                Obj4.Status();
                Obj4.ShowInfo();   

                Obj5.Status();
                Obj5.ShowInfo();
            }
        }
    }
}

