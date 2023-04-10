#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define M 3*10005
bitset<M>mark;
void Sieve()
{
    for(int i=4; i<=M; i+=2)
    {
        mark[i]=true;
    }
    for (int i = 3; i * i <=M; i += 2)
    {
        if (mark[i] == false)
        {
            for (int j = i * i; j <=M; j +=i+i)
            {
                mark[j] = true;
            }
        }
    }
    mark[1]=1;
}
int main()
{
 int test;
 cin>>test;
 Sieve();
 while(test--)
 {
   ll n;
   cin>>n;
   vector<ll>vt;
   for(int i=(n+1);i<=M;)
   {
         if(mark[i]==0)
         {
           vt.push_back(i);i+=n;
         }
         else 
         {
          i++;
         }
   }
   ll sum=1;
   for(int i=0;i<2;i++){sum=sum*vt[i];}
    cout<<sum<<endl;
 }
 return 0;
}