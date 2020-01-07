using System;

namespace Alcoritm_8._2
{
    class Program
    {
        static void Main(string[] args)
        {
            const float EXP = 1e-10f;
            Console.Write("Извлеч корень из :");
            int q = Convert.ToInt32(Console.ReadLine());
            double x = 1;
            double y = q;
            while (Math.Abs(y - x) >= EXP)
            {
                x = y;
                y = (x + q / x) / 2;
            }
            Console.WriteLine("Корень по формуле Ньютона: "+ y);
            Console.WriteLine("Корень - стандартный вид: "+ Math.Sqrt(q));
            Console.WriteLine("Разница: " + Math.Abs(Math.Sqrt(q) - y));
            Console.Read();
        }
    }
}
