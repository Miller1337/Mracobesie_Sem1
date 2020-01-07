using System;

namespace Alcoritm_8._4
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("N: ");
            int i, j, c=0, b;
            int n = Convert.ToInt32(Console.ReadLine());
            int[] a = new int[n];
            a[0] = 1;
            Console.Write(a[0]);
            Console.WriteLine();
            for(i=1;i<n;i++)
            {
                for (j = 0; j <= i; j++)
                {
                    b = a[j];
                    a[j] += c;
                    c = b;
                    Console.Write(a[j]);
                    Console.Write(" ");
                }
                Console.WriteLine(" ");
            }
            Console.Read();
        }
    }
}
