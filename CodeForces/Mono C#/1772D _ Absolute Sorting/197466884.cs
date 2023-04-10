using System;
namespace myApp{
    class Solution{
        public static void Main(string[] args){
            int t;t=int.Parse(Console.ReadLine());
            while (t>0) { t--;Solve();}
        }
        private static void Solve(){
            int n=int.Parse(Console.ReadLine());
            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int l = 0, r = 1000000000,x;
            for (int i = 0; i<n-1; i++)
            {
                if (a[i]<a[i+1])
                {
                    x=(a[i]+a[i+1])/2;
                    r=Math.Min(x, r);
                }
                else if (a[i]>a[i+1])
                {
                    x=(a[i]+a[i+1]+1)/2;
                    l=Math.Max(x, l);
                }
            }
            if (l<=r)
            {
                Console.WriteLine(l);
            }
            else
            {
                Console.WriteLine(-1);
            }
        }
    }
}