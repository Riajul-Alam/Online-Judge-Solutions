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
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
int main()
{
       fast;
 ll t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; 
      ll a[n+5];
   vector<ll>v;
   for(ll i=0;i<n;i++)
   {
     cin>>a[i];
   }
    ans = -INF;
 for (ll i = n - 1; i >= max((ll)0, n - 200); i--) {
  for (ll j = i - 1; j >= max((ll)0, n - 200); j--) {
   ans = max(ans, ((i + 1) * (j + 1)) - m * (a[i] | a[j]));
  }
 }
 cout<<ans<<endl;
 
 }
}