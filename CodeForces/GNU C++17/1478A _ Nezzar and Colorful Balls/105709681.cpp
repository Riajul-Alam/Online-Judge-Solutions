#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define  mem(a,b)   memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
int main()
{
    fast;
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,sum=1,c1=0,c2=0,ans=0;
   cin>>n;
      ll a[100005];
   vector<ll>v;
   map<ll,ll>mp;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
    mp[a[i]]++;
   }
   ll i=0,mx=1;
   for(i=0;i<n;i++)
   {
     sum=max(sum,mp[a[i]]);
   }
   cout<<sum<<endl;
 
 }
}