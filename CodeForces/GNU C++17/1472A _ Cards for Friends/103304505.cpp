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
  ll n,m,x,y,z,k,c1=1,c2=1,total=1;
  cin>>n>>m>>k;
  while(n%2==0)
  {
   total=total*2;n=n/2;
  }
  while(m%2==0)
  {
   total=total*2;m=m/2;
  }
  if(total>=k)
  {
         cout<<"YES"<<endl;
  }
  else
  {
  cout<<"NO"<<endl; 
  }
 }
}