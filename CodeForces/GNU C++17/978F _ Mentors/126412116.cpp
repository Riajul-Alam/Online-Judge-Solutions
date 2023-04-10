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
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; 
   vector<ll>a(n),b(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
      vector<ll>graph[n+5];
      for(int i=0;i<m;i++)
      {
       cin>>x>>y;
        graph[x].pb(a[y-1]);
        graph[y].pb(a[x-1]);
      }
      b=a;
      sort(all(b));
      vector<ll>vv;
      for(int i=0;i<n;i++)
      {
        auto it2=lower_bound(b.begin(),b.end(),a[i])-b.begin();
         if(it2==0){
          vv.pb(ll(0));continue;
         }
         if(graph[i+1].size()==0){
          vv.pb(it2);continue;
         }
         sort(all(graph[i+1]));
         auto it3=lower_bound(graph[i+1].begin(),graph[i+1].end(),a[i])-graph[i+1].begin();
         ll tmp;
         vv.pb(it2-it3);
      }
      //cout<<vv.size()<<endl;
      for(int i=0;i<n;i++){
       cout<<vv[i]<<" ";
      }cout<<endl;
 
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