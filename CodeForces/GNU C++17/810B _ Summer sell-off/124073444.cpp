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
struct A
{
 ll p,q,r;
};
bool cmp(A x,A y)
{
    ll tmp1,tmp2;
    tmp1=min(x.r,x.q)-min(x.p,x.r);
    tmp2=min(y.r,y.q)-min(y.p,y.r);
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
   vector<A>vp(n);
   for(int i=0;i<n;i++)
   {
     cin>>x>>y;
     vp[i].p=x;
     vp[i].q=y;
     vp[i].r=(2*x);
   }
   sort(vp.begin(),vp.end(),cmp);
  
     // for(int i=0;i<n;i++)
     // {
     //  cout<<vp[i].ff<<" "<<vp[i].ss<<endl;
     // }
     for(int i=0;i<m;i++)
     {
        sum+=min(vp[i].r,vp[i].q);
     }
     for(int i=m;i<n;i++)
     {
      sum+=min(vp[i].p,vp[i].q);
     }
     cout<<sum<<endl;
 }
}