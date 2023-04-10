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
  vector<ll>v;
  ll one=0,two=0;
  for(int i=0;i<n;i++)
  {
   ll val;
   cin>>val;
   if(val==1){one++;c1=c1+1;}
   else{two++;c2=c2+2;}
   v.push_back(val);
  }
  if(one%2==0 && one>1)
  {
   cout<<"YES"<<endl;
  }
  else if(one%2==0 && two%2==0)
  {
   cout<<"YES"<<endl;
  }
  else
  {
   cout<<"NO"<<endl;
  }
 }
}