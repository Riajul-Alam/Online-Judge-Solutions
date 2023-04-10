#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mk make_pair
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  ll n,m,x,y,z,k,c1=0,c2=0,Count=0;
  cin>>n;
  ll v[n+1],pre[n+1];
  for(int i=1;i<=n;i++)
  {
   cin>>v[i];
  }
  pre[n+1]={};
  ll sum=0,mx=0;
  for(int i=n;i>=1;i--)
  {
   x=i+v[i];
   if(x>n)
   {
               sum=v[i];
   }
   else
   {
               sum=v[i]+pre[x];
   }
   pre[i]=sum;
   mx=max(mx,sum);
  }
  cout<<mx<<endl;
 }
}