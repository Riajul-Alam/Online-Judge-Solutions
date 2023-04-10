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
#define debug(x) cout<<#x<<" "<<x<<endl;
#define eps 1e-10
#define INF 1e18
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
void solve()
{   
 int t=1;
 cin>>t;
 while(t--)
 {
   ll n,m,x=0,y=0,z,k,sum=0,c1=0,c2=0,ans=INF;
   cin>>n; 
      ll a[n+5],b[n+5];
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   for(int i=0;i<n;i++){cin>>b[i];}
     // a[0]=b[0]=0,a[n-1]=b[n-1]=0;
   ll pref1[n+5],pref2[n+5];
   pref1[0]=a[0];
      pref2[0]=b[0];
      for(int i=1;i<n;i++)
      {
       pref1[i]=pref1[i-1]+a[i];
       pref2[i]=pref2[i-1]+b[i];
      }
     for(int i=0;i<n;i++)
     {
      x=pref1[n-1]-pref1[i];
      if(i!=0)y=pref2[i-1];
      ans=min(ans,max(x,y));
     }
     cout<<ans<<endl;
 }
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   fast; 
   solve();          
}