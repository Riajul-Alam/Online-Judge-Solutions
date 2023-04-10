//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define pf push_front
#define in insert
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define mem(a,b) memset(a,b,sizeof(a))
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
#define INF 1e18
#define N 100005
vector<vector<pll>>g(N+5);
vector<ll>par(N,0);
bool vis[N+5];
ll dist[N+5];
void reset(){
    for (int i = 0; i <N; i++){
        g[i].clear();
        vis[i] = 0;
        dist[i] = INF;
    }
}
void dijkstra(ll source){
  priority_queue<pll,vector<pll>,greater<pll>>pq;
  pq.push({0,source});
  dist[source]=0;
  while(!pq.empty()){
    ll cost=pq.top().ff;
    ll val=pq.top().ss;
    pq.pop();
    vis[val]=1;
    for(pll v:g[val]){
      ll val1=v.ff,cost1=v.ss;
      if(!vis[val1] && dist[val]+cost1<dist[val1]){
        dist[val1]=dist[val]+cost1;
       par[val1]=val;
        pq.push({dist[val]+cost1,val1});
      }
    }
  }
}
 
void solve()
{
    reset();
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
      ll u,v,w;
      cin>>u>>v>>w;
      g[u].push_back({v,w});
      g[v].push_back({u,w}); // undirected
    }
    dijkstra(1);
    if(dist[n]==INF){
     cout<<-1<<endl;
    }else{
     ll u=n;
     vector<ll>final;
     final.pb(n);
     while(par[u]!=0){
      final.pb(par[u]);
      u=par[u];
     }
     reverse(all(final));
     for(int i=0;i<sz(final);i++){
        cout<<final[i]<<" ";
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
   //ll t;cin>>t;while(t--) 
   solve();          
}