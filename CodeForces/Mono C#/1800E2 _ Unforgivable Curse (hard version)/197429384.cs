using System;
using System.Linq;
namespace myApp
{
    class Solution
    {
        public static void Main(string[] args)
        {
            int t=int.Parse(Console.ReadLine());
            while (t>0)
            {
                t--;Solve();
            }
        }
        public static void Solve()
        {
            int n, k;
            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            n=a[0]; k=a[1];
            string s, t;
            s=Console.ReadLine();
            t=Console.ReadLine();
            string st1, st2;
            st1=string.Join(" ", s.OrderBy(c => c));
            st2=string.Join(" ", t.OrderBy(c => c));
            if (st1!=st2)
            {
                Console.WriteLine("NO"); return;
            }
            for(int i = 0; i<n; i++)
            {
                if (s[i]==t[i]) continue;
                if (i-k>=0 || i+k<n) continue;
                Console.WriteLine("NO");return;
            }
            Console.WriteLine("YES");
        }
    }
}