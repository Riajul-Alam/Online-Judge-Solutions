//Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,s=0;
   cin>>n;
      ll a[2*100005];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];s+=(a[i]);
   }
   ll x=(s%n);
   if(x==0){
    cout<<0<<endl;continue;
   }else if(x!=0){
    cout<<x*(n-x)<<endl;
   }
 
 }
}