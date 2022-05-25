using System;

namespace ConstructorInheri
{
    public class Vehicle
    {
        private readonly string _registrationNumber;

        // public Vehicle()
        // {
        //     System.Console.WriteLine("Vehicle is being initialised.");
        // }

        public Vehicle(string registrationNumber)
        {
            _registrationNumber = registrationNumber;

            System.Console.WriteLine("Vehicle is being initialised. {0}", registrationNumber);
        }
    }
}
