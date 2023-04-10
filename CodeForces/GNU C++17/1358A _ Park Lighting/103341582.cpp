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
  ll n,m,x,y,z,k,c1=1,c2=1,total=1,sum=0;
  cin>>n>>m;
  sum=(m/2)*n;
  if(m%2!=0)
  {
   sum=sum+(n+1)/2;
  }
  cout<<sum<<endl;
 
 }
}