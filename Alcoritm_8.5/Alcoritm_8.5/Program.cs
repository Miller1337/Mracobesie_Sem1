using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace Laba_8_5
{
    class Program
    {
        static void Main(string[] args)
        {
            int s, max;
            string i, o, Filename;
            string[] A;
            Filename = "8.5";

            Console.WriteLine("1 - Запись в текстовый файл информации, вводимой с клавиатуры");
            Console.WriteLine("2 - Считывание на экран информации из текстового файла");
            Console.WriteLine("3 - Построчное считывание строк файла и их перезапись задом наперед");
            Console.WriteLine("4 - Поиск и вывод самой длинной строки в файле");
            Console.WriteLine("5 - Перемешивание строк в файле случайным образом");
            Console.WriteLine("6 - Удаление всех строк из файла");
        again:
            Console.Write("Номер действия: ");
            s = Convert.ToInt32(Console.ReadLine());

            switch (s)
            {
                case 1:
                    Console.WriteLine("Введите текст: ");
                    i = Console.ReadLine();
                    File.AppendAllText(Filename, i);
                    File.AppendAllText(Filename, "\n");
                    break;
                case 2:
                    o = File.ReadAllText(Filename);
                    Console.WriteLine("Информации из текстового файла: {0}", o);
                    break;
                case 3:
                    A = File.ReadAllLines(Filename);
                    File.WriteAllText(Filename, null);
                    for (int j = 0; j < A.Length / 2; j++)
                    {
                        string tmp = A[j];
                        A[j] = A[A.Length - 1 - j];
                        A[A.Length - 1 - j] = tmp;
                    };
                    File.WriteAllLines(Filename, A);
                    break;
                case 4:
                    max = -1;
                    A = File.ReadAllLines(Filename);
                    for (int j = 0; j < A.GetLength(0); j++)
                    {
                        if (A[j].Length > max)
                        {
                            max = A[j].Length;
                        };
                    };
                    for (int j = 0; j < A.GetLength(0); j++)
                    {
                        if (A[j].Length == max)
                        {
                            Console.WriteLine("Самая длинная строка в файле: {0}", A[j]);
                            break;
                        };
                    };
                    break;
                case 5:
                    A = File.ReadAllLines(Filename);
                    Random rand = new Random();
                    for (int j = A.Length - 1; j >= 1; j--)
                    {
                        int k = rand.Next(j + 1);
                        string tmp = A[k];
                        A[k] = A[j];
                        A[j] = tmp;
                    };
                    File.WriteAllText(Filename, null);
                    File.WriteAllLines(Filename, A);
                    break;
                case 6:
                    File.WriteAllText(Filename, null);
                    break;
            }
            goto again;
        }
    }
}