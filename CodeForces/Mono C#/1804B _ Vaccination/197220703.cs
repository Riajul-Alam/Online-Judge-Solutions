using System;
 
class Program {
    static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            while (t>0)
            {
                t--;
                string[] input = Console.ReadLine().Split(' ');
                int n, k, x, y;
                n=int.Parse(input[0]);
                k=int.Parse(input[1]);
                x=int.Parse(input[2]);
                y=int.Parse(input[3]);
                //string[] input1 = Console.ReadLine().Split(' ');
                int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int mxWait = 0, GoodVac = 0, availVac=0,ans=0;
                for(int i = 0; i<n; i++)
                {
                    if (GoodVac>=a[i] && availVac>0)
                    {
                        availVac--; continue;
                    }
                    else
                    {
                        GoodVac=0; availVac=0;
                    }
                    if (GoodVac<=0|| availVac<=0)
                    {
                        ans++;
                        mxWait=a[i]+y;
                        GoodVac=a[i]+y+x; availVac=k; i--;
                    }
                }
                Console.WriteLine(ans);
            }
    }
}