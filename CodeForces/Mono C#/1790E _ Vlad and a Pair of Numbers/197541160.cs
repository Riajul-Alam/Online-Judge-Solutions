using System;
namespace myApp
{
    class Solution
    {
        static void Main(string[] args)
        {
            int t=int.Parse(Console.ReadLine());
            while (t>0)
            {
                t--;Solve();
            }
        }
        private static void Solve()
        {
            long n = long.Parse(Console.ReadLine());
            if (n%2!=0)
            {
                Console.WriteLine(-1); return;
            }
            long x=(n/2);
            if (((n+x)^(n-x))==n)
            {
                long p, q;p=(n+x);q=n-x;
                Console.WriteLine( p+" "+q);
            }
            else
            {
                Console.WriteLine(-1);
            }
        }
    }
}