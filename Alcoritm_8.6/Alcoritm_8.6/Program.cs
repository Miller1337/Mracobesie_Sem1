using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

namespace Laba_8_6
{
    class Program
    {
        public static TimeSpan Bubble(int[] A)
        {
            Stopwatch sWatch = new Stopwatch();
            TimeSpan k;
            int l = 0;
            int[] B = new int[A.Length];
            for (int i = 0; i < A.Length; i++)
            {
                B[i] = A[i];
            }
            sWatch.Start();
            for (int j = 0; j < A.Length - 1; j++)
            {
                for (int i = 1; i < A.Length - 1 - j; i++)
                {
                    if (A[i - 1] > A[i])
                    {
                        int p = A[i - 1];
                        A[i - 1] = A[i];
                        A[i] = p;
                        l++;
                    }
                }
            }
            sWatch.Stop();
            for (int i = 0; i < A.Length; i++)
            {
                A[i] = B[i];
            }
            k = sWatch.Elapsed;
            Console.WriteLine("Сортировка Пузырек: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine("Количество итераций - {0}", l);
            Console.WriteLine();
            return k;
        }
        public static TimeSpan Select(int[] A)
        {
            Stopwatch sWatch = new Stopwatch();
            TimeSpan k;
            int l = 0;
            int i, j, p, s;
            int[] B = new int[A.Length];
            for (i = 0; i < A.Length; i++)
            {
                B[i] = A[i];
            }
            sWatch.Start();
            for (j = 0; j < A.Length - 1; j++)
            {
                p = j;
                for (i = j + 1; i < A.Length; i++)
                {
                    if (A[i] < A[p])
                    {
                        p = i;
                        l++;
                    }
                }
                s = A[j];
                A[j] = A[p];
                A[p] = s;
            }
            sWatch.Stop();
            for (i = 0; i < A.Length; i++)
            {
                A[i] = B[i];
            }
            k = sWatch.Elapsed;
            Console.WriteLine("Сортировка выбором: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine("Количество итераций - {0}", l);
            Console.WriteLine();
            return k;
        }
        public static TimeSpan Insert(int[] A)
        {
            Stopwatch sWatch = new Stopwatch();
            TimeSpan k;
            int l = 0;
            int i, j, p;
            int[] B = new int[A.Length];
            for (i = 0; i < A.Length; i++)
            {
                B[i] = A[i];
            }
            sWatch.Start();
            for (i = 0; i < A.Length; i++)
            {
                p = A[i];
                for (j = i - 1; j >= 0 && A[j] > p; j--)
                {
                    A[j + 1] = A[j];
                    l++;
                }
                A[j + 1] = p;
            }
            sWatch.Stop();
            for (i = 0; i < A.Length; i++)
            {
                A[i] = B[i];
            }
            k = sWatch.Elapsed;
            Console.WriteLine("Сортировка вставками: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine("Количество итераций - {0}", l);
            Console.WriteLine();
            return k;
        }
        public static TimeSpan Gnome(int[] A)
        {
            Stopwatch sWatch = new Stopwatch();
            TimeSpan k;
            int l = 0;
            int i, p;
            int[] B = new int[A.Length];
            for (i = 0; i < A.Length; i++)
            {
                B[i] = A[i];
            }
            sWatch.Start();
            i = 0;
            while (i < A.Length)
            {
                if (i == 0 || A[i - 1] <= A[i])
                    i++;
                else
                {
                    p = A[i];
                    A[i] = A[i - 1];
                    A[i - 1] = p;
                    i--;
                    l++;
                }
            }
            sWatch.Stop();
            for (i = 0; i < A.Length; i++)
            {
                A[i] = B[i];
            }
            k = sWatch.Elapsed;
            Console.WriteLine("Сортировка гномья: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine("Количество итераций - {0}", l);
            Console.WriteLine();
            return k;
        }
        public static TimeSpan Quick(int[] A, int first, int last)
        {
            Stopwatch sWatch = new Stopwatch();
            TimeSpan k;
            int l = 0;
            int i, j, p, s;
            int[] B = new int[A.Length];
            for (i = 0; i < A.Length; i++)
            {
                B[i] = A[i];
            }
            sWatch.Start();
            s = A[(last - first) / 2 + first];
            i = first;
            j = last;
            while (i <= j)
            {
                while (A[i] < s && i <= last) i++;
                while (A[j] > s && j >= first) j--;
                if (i <= j)
                {
                    p = A[i];
                    A[i] = A[j];
                    A[j] = p;
                    i++;
                    j--;
                    l++;
                }
            }
            if (j > first)
            {
                Quick(A, first, j);
            }
            if (i < last)
            {
                Quick(A, i, last);
            }
            sWatch.Stop();
            for (i = 0; i < A.Length; i++)
            {
                A[i] = B[i];
            }
            k = sWatch.Elapsed;
            return k;
        }
        static void Main(string[] args)
        {
            int[] A = new int[1000];
            Random rand = new Random();
            for (int i = 0; i < A.Length; i++)
                A[i] = rand.Next();
            int[] B = new int[10000];
            for (int i = 0; i < B.Length; i++)
                B[i] = rand.Next();
            int[] C = new int[100000];
            for (int i = 0; i < C.Length; i++)
                C[i] = rand.Next();
            int[] D = new int[1000000];
            for (int i = 0; i < D.Length; i++)
                D[i] = rand.Next();
            int[] E = new int[10000000];
            for (int i = 0; i < E.Length; i++)
                E[i] = rand.Next();

            TimeSpan k;

            Console.WriteLine("Сортиовка массива на 1000: ");
            Console.WriteLine();
            Console.WriteLine();
            Bubble(A);
            Select(A);
            Insert(A);
            Gnome(A);
            k = Quick(A, 0, A.Length - 1);
            Console.WriteLine("Быстрая сортировка: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine();
            Console.WriteLine();

            Console.WriteLine("Сортиовка массива на 10000: ");
            Console.WriteLine();
            Bubble(B);
            Select(B);
            Insert(B);
            Gnome(B);
            k = Quick(B, 0, B.Length - 1);
            Console.WriteLine("Быстрая сортировка: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine();
            Console.WriteLine();

            Console.WriteLine("Сортиовка массива на 100000: ");
            Console.WriteLine();
            Bubble(C);
            Select(C);
            Insert(C);
            Gnome(C);
            k = Quick(C, 0, C.Length - 1);
            Console.WriteLine("Быстрая сортировка: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine();
            Console.WriteLine();

            Console.WriteLine("Сортиовка массива на 1000000: ");
            Console.WriteLine();
            Bubble(D);
            Select(D);
            Insert(D);
            Gnome(D);
            k = Quick(D, 0, D.Length - 1);
            Console.WriteLine("Быстрая сортировка: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine();
            Console.WriteLine();

            Console.WriteLine("Сортиовка массива на 10000000: ");
            Console.WriteLine();
            Bubble(E);
            Select(E);
            Insert(E);
            Gnome(E);
            k = Quick(E, 0, E.Length - 1);
            Console.WriteLine("Быстрая сортировка: ");
            Console.WriteLine("Время - {0}", k);
            Console.WriteLine();
            Console.WriteLine();

            Console.Read();
        }
    }
}