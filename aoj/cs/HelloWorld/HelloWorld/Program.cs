using System;
using System.Collections.Generic;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Introduction 01 */
            var str = Console.ReadLine();
            int readvalue = int.Parse(str);
            double result = Math.Pow(readvalue,3);
            Console.WriteLine(result);



            /* 02 */
            
            var str = Console.ReadLine();
            string[] spliter = str.Split(' ');
            int[] datas = new int[2];
            int i = 0;

            for(i = 0; i < 2; i++ )
           {
               // Console.WriteLine("debug "+ i);
               datas[i] = int.Parse(spliter[i]);
            }

            int box_length = datas[0] * 2 + datas[1] * 2;
            int box_area = datas[0] * datas[1];

            Console.WriteLine("{0} {1}",box_area,box_length);
             
             
            

            /* 03 */

            
            var line = Console.ReadLine();

            int time = int.Parse(line);

            int hour = time / 3600;

            int min = (time % 3600) / 60;

            int sec = time % 60;


             Console.WriteLine(hour + ":" + min + ":" + sec);

            

            /* 04 */

            var line = Console.ReadLine();

            string[] datas = line.Split(' ');

            int a = int.Parse(datas[0]);
            int b = int.Parse(datas[1]);

            string resultText;

            if(a == b)
            {
                resultText = "a == b";
            }
            else if(a > b)
            {
                resultText = "a > b";
            }
            else
            {
                resultText = "a < b";
            }

            Console.WriteLine(resultText);

            /* 05 Range */

            var line = Console.ReadLine();

            string[] datas = line.Split(' ');

            int a = int.Parse(datas[0]);
            int b = int.Parse(datas[1]);
            int c = int.Parse(datas[2]);

            if(a < b && b < c)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }

            /* 競ﾌﾟﾛ */

            
            int people = int.Parse(Console.ReadLine());
            int number = int.Parse(Console.ReadLine());

            if (people == number)
            {
                Console.WriteLine(0);
            }
            else
            {

                int stack = number / people;

                int require_num = people * (stack + 1);

                int result = require_num - number;

                Console.WriteLine(result);

            }

            

            /* 競ﾌﾟﾛ２ */
            var line1 = Console.ReadLine();
            var line2 = Console.ReadLine();

            string[] datas = line1.Split(' ');
            string[] values = line2.Split(' ');
            int number = int.Parse(datas[0]);
            int[] list = new int[number];

            for(int i = 0;i < number; i++)
            {
                list[i] = int.Parse(values[i]);
            }
 
            int bin = int.Parse(datas[1]);

            string bin_read = Convert.ToString(bin, 2);
            char[] bin_char = bin_read.ToCharArray();

            int result = 0;

            for (int i = 0; i < number; i++ )
            {
                if(bin_char[i] == 1)
                {
                    result = result + list[i];
                }
            }

                Console.WriteLine(result);



           

            /* itp1_2_C*/

            var line = Console.ReadLine();

            string[] split = line.Split(' ');

            List<int> datas = new List<int>();
            for(int i = 0;i < split.Length;i++)
            {
                datas.Add(int.Parse(split[i]));
            }

            datas.Sort();

            string result = datas[0].ToString();

            for (int i = 1; i < 3; i++ )
            {
                result = result + " " + datas[i];
            }

            Console.Write(result);




            

        }
    }
}
