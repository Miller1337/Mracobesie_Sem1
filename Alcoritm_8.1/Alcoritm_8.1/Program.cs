using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Alcoritm_8._1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите коэфф 1:");
            int a1 = Convert.ToInt32((Console.ReadLine()));
            int b1 = Convert.ToInt32((Console.ReadLine()));
            int c1 = Convert.ToInt32((Console.ReadLine()));
            int d1 = Convert.ToInt32((Console.ReadLine()));
            Console.WriteLine("Введите коэфф 2:");
            int a2 = Convert.ToInt32((Console.ReadLine()));
            int b2 = Convert.ToInt32((Console.ReadLine()));
            int c2 = Convert.ToInt32((Console.ReadLine()));
            int d2 = Convert.ToInt32((Console.ReadLine()));
            Console.WriteLine("Введите коэфф 3:");
            int a3 = Convert.ToInt32((Console.ReadLine()));
            int b3 = Convert.ToInt32((Console.ReadLine()));
            int c3 = Convert.ToInt32((Console.ReadLine()));
            int d3 = Convert.ToInt32((Console.ReadLine()));
            double f = a1 * b2 * c3 + a2 * b3 * c1 + a3 * b1 * c2 - (a3 * b2 * c1 + a2 * b1 * c3 + a1 * b3 * c2);
            double f1 = d1 * b2 * c3 + d2 * b3 * c1 + d3 * b1 * c2 - (d3 * b2 * c1 + d2 * b1 * c3 + d1 * b3 * c2);
            double f2 = a1 * d2 * c3 + a2 * d3 * c1 + a3 * d1 * c2 - (a3 * d2 * c1 + a2 * d1 * c3 + a1 * d3 * c2);
            double f3 = a1 * b2 * d3 + a2 * b3 * d1 + a3 * b1 * d2 - (a3 * b2 * d1 + a2 * b1 * d3 + a1 * b3 * d2);
            double x = f1 / f;
            double y = f2 / f;
            double z = f3 / f;

            Console.WriteLine("x={0}, y={1}, z={2}",x,y,z);
            Console.Read();
        }
    }
}
