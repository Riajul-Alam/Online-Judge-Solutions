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
   ll n,m,x,y,z,k,s1=0,s2=0,s=0,c1=0,c2=0,ans=0;
   cin>>n>>m>>k;
      ll a[100005];
   vector<ll>v,v2;
   map<ll,ll>mp1,mp2;
   for(int i=0;i<k;i++)
   {
    cin>>x;
    v.push_back(x);
    mp1[x]++;
   }
   for(int i=0;i<k;i++)
   {
    cin>>x;
    v2.push_back(x);
    mp2[x]++;    
   }
   for(int i=0;i<k;i++)
   {
    ans=ans+k-((mp1[v[i]]+mp2[v2[i]])-1);
   }
   cout<<ans/2<<endl;
 
 }
}