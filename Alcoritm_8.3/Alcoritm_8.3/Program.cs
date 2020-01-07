using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Alcoritm_8._3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите число: ");
            int n = Convert.ToInt32(Console.ReadLine());
            int a, b;
            while (n>10)
            {
                a = n;
                b = 0;
                while (a>10)
                {
                    a /= 10;
                    b++;
                }
                Console.WriteLine(a);
                n = n % Convert.ToInt32(Math.Pow(10, b));
            }
            Console.WriteLine(n);
            Console.Read();
        }
    }
}
