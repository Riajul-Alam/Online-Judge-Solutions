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
int main()
{
    fast;
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>k; 
      ll a[150005];
   vector<pair<ll,ll>>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
     ll tmp=k;
     ll i=0;
  for(;i<n;i++)
  {
   if(tmp==0){i=i-1;break;}
   sum+=a[i];tmp--;
  }
  if(i==n){i=i-1;}
     ll j=i;
     ll pre[150005];
     pre[0]=a[0];
     for(int i=1;i<n;i++)
     {
      pre[i]=pre[i-1]+a[i];
     }
     x=0;
     sum=0;
     v.pb({pre[j],0});
     j++;
     for(;j<n;j++){
      sum+=a[x];
      v.push_back({pre[j]-sum,j-k+1});
      x++;
     }
     sort(all(v));
     cout<<v[0].ss+1<<endl;
 }
}