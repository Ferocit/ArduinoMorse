using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Ports;

namespace ArduinoTalk
{
    class Program
    {
        static void Main(string[] args)
        {
            bool run = true;
            SerialPort sp1 = new SerialPort();
            sp1.PortName = "COM3";
            sp1.BaudRate = 9600;
            sp1.Open();

            Console.WriteLine("Was willst du morsen?");

            while (run)
            {
                string input = Console.ReadLine();

                if (input == "exit")
                    run = false;
                else
                {
                    sp1.Write(input);
                }
            }

            sp1.Close();
        }
    }
}
