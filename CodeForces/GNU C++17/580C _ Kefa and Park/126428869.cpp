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
vector<ll>graph[100005];
vector<ll>a(100005);
vector<bool>visited(100005);
ll n,m,ans=0;
void dfs(ll source,ll parent,ll Count)
{
 visited[source]=1;
 if(a[source-1]==1 && parent==1){
    Count++;
 }
 else if(a[source-1]==1){
  Count=1;
 }
 else{
  Count=0;
 }
 bool isleaf=false;
 if(Count>m){return;}
 for(int i=0;i<graph[source].size();i++)
 {
  ll next=graph[source][i];
  if(visited[next]==0){
   isleaf=true;
   dfs(next,a[source-1],Count);
  }
 }
 if(isleaf==false){
  if(Count<=m){
   ans++;
  }
  return;
 }
}
void solve()
{   
 int t=1;
 //cin>>t;
 while(t--)
 {
   ll x,y,z,k,sum=0,c1=0,c2=0;
   cin>>n>>m; 
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n-1;i++)
   {
     cin>>x>>y;
     // if(x>y){swap(x,y);}
     graph[x].pb(y);
     graph[y].pb(x);
   }
   dfs(1,0,0);
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