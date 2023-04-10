#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first 
#define ss second
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  ll n;
  string s;
  cin>>s;
  n=s.size();
  ll Count=1,Cnt=1,mx=1;
  for(int i=0;i<n;i++)
  {
   if(s[i]=='L'){Count++;}
   else
   {
              mx=max(mx,Count);
              Count=1;
   }
  }
  mx=max(Count,mx);
  cout<<mx<<endl;
 }
}