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
vector<ll>graph[200005];
vector<bool>visited(200005);
bool found=true;
void dfs(ll source)
{
 if(visited[source])return;
 visited[source]=1;
 if(graph[source].size()!=2){
  found=false;
 }
 for(int i=0;i<graph[source].size();i++)
 {
  ll next=graph[source][i];
  if(visited[next]==0){
   dfs(next);
  }
 }
}
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll n,m,x,y,z,k,sum=0,c1=0,c2=0,ans=0;
   cin>>n>>m; 
   for(int i=0;i<m;i++)
   {
    cin>>x>>y;
    graph[x].pb(y);
    graph[y].pb(x);
   }
   for(int i=1;i<=n;i++)
   {
    found=true;
    if(visited[i]==0){
     dfs(i);
     if(found){ans++;}
    }
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