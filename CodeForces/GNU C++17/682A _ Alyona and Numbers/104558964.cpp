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
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,s1=0,s2=0,s=0,c1=0,c2=0,ans=0;
   cin>>n>>m;
   ll mx=max(m,n);
   for(int i=1;i<=min(m,n);i++)
   {
    c1+=(mx+(i%5))/5;
   }
   cout<<c1<<endl;
 }
}