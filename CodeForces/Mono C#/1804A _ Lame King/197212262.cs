using System;
 
namespace myApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
 
            while(t>0){
                t--;
                string[] input = Console.ReadLine().Split();
                int n = int.Parse(input[0]);
                int m = int.Parse(input[1]);
                int p, q;
                p=Math.Abs(n);
                q=Math.Abs(m);
                if (n==0 || m==0)
                {
                    Console.WriteLine((Math.Abs(n)*2)+(Math.Abs(m)*2)-1);
                }
                else if (Math.Abs(p-q)<=1)
                {
                    Console.WriteLine(p+q);
                }
                else
                {
                    Console.WriteLine((Math.Abs(p-q)*2)-1+(Math.Min(p, q)*2));
                }
            }
        }
    }
}