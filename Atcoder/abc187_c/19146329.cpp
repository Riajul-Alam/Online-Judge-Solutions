#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pb push_back
#define debug cout<<"OK"<<endl;
int main()
{
  ll t=1;
  //cin >> t;
  while (t--)
  {
  int a,b;
   cin>>a>>b;
   int mx=0;
   int sum1=0,sum2=0;
   while(a>0)
   {
    ll rem=a%10;
    sum1=sum1+rem;
    a=a/10;
   }
   while(b>0)
   {
    ll rem=b%10;
    sum2=sum2+rem;
    b=b/10;
   } 
   cout<<max(sum1,sum2)<<endl;
  }

}

