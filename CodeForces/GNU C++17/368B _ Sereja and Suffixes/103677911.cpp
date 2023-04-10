#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
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
    ll a[n+1],b[m+1];
 vector<ll>v;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 for(int i=0;i<m;i++)
 {
  cin>>b[i];
 }
 ll c[n+1];
 set<ll>st;
 for(int i=n-1;i>=0;i--)
 {
       st.insert(a[i]);
       c[i]=st.size();
 }
 for(int i=0;i<m;i++)
 {
  cout<<c[b[i]-1]<<endl;
 }
 
 }
}