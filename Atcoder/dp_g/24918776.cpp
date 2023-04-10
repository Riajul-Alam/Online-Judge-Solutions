
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
/*vector<ll>graph[100005];
ll visited[100005];
vector<ll>v;
ll dfs(ll a)
{
    ll ret=0;
    for(ll i=0;i<graph[a].size();i++){
        ret=max(ret,dfs(graph[a][i])+(ll)1);
    }
    return ret;
}
void solve()
{   
   ll n,m,ans=0;
   cin>>n>>m;
   for(int i=1;i<=m;i++)
   {
    ll x,y;
    cin>>x>>y;
    graph[x].pb(y);
   }
   for(int i=1;i<=n;i++)
   {
    ll mx=dfs(i);
    ans=max(ans,mx);
   }
   cout<<ans<<endl;
}
*/
vector<ll>graph[100005];
int dp[110000];
ll dfs(ll a)
{
    if(dp[a]!=-1) return dp[a];
    ll ret=0;
    for(ll i=0;i<graph[a].size();i++){
        ret=max(ret,dfs(graph[a][i])+(ll)1);
    }
    return dp[a]=ret;
}
void solve()
{   
   ll n,m,ans=0;
   cin>>n>>m;
   mem(dp,-1);
   for(int i=1;i<=m;i++)
   {
    ll x,y;
    cin>>x>>y;
    graph[x].pb(y);
   }
   for(int i=1;i<=n;i++)
   {
    ans=max(ans,dfs(i));
   }
   cout<<ans<<endl;
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