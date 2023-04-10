using System;
namespace myApp
{
    class Solution
    {
        public static void Main(string[] args)
        {
            int t;t=int.Parse(Console.ReadLine());
            while (t>0)
            {
                t--;Solve();
            }
        }
        private static void Solve()
        {
            long n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
            n=int.Parse(Console.ReadLine());
            long[] a = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
            ans=f(a, n);
            long fst0 = 0, last1 = 0;
            for (long i = 0; i<n; i++)
            {
                if (a[i]==0)
                {
                    fst0=i; break;
                }
            }
            for (long i = n-1; i>=0; i--)
            {
                if (a[i]==1)
                {
                    last1=i; break;
                }
            }
            Console.WriteLine(Math.Max((Math.Max(f(a, n, fst0), f(a, n, last1))), ans));return;
        }
        private static long f(long[] b,long n,long ind=-1)
        {
            long ans = 0;
            long[] a = new long[n]; ;
            for(long i = 0; i<n; i++)
            {
                a[i]=b[i];
            }
            if (ind!=-1) a[ind]^=1;
            long c1 = 0;
            if (a[n-1]==0) c1++;
            for (long i = n-2; i>=0; i--)
            {
                if (a[i]==1)
                {
                    ans+=c1;
                }
                else
                {
                    c1++;
                }
            }
            return ans;
        }
    }
}