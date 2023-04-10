//Bismillahir Rahmanir Raheem
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
#define eps 1e-10
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
bool cmp(const pair<ll,ll>a, const pair<ll,ll>b)
{
    ll tmp1,tmp2;
    tmp1=min(2*a.ff,a.ss)-min(a.ff,a.ss);
    tmp2=min(2*b.ff,b.ss)-min(b.ff,b.ss);
    return tmp1>tmp2;
}
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; 
      ll a[100005];
   vector<pair<ll,ll>>vp;
   for(int i=0;i<n;i++)
   {
     cin>>x>>y;
     vp.pb({x,y});
   }
   sort(vp.begin(),vp.end(),cmp);
  
     // for(int i=0;i<n;i++)
     // {
     //  cout<<vp[i].ff<<" "<<vp[i].ss<<endl;
     // }
     for(int i=0;i<m;i++)
     {
        sum+=min(2*vp[i].ff,vp[i].ss);
     }
     for(int i=m;i<n;i++)
     {
      sum+=min(vp[i].ff,vp[i].ss);
     }
     cout<<sum<<endl;
 }
}