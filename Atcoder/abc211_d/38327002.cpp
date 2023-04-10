//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define INF 1e14
const ll mod=1000000007;
// shortest path from source to all other node
// time complexity : O(V+E)
//https://atcoder.jp/contests/abc211/tasks/abc211_d

void bfs(ll source,vector<vector<ll>>&g,vector<ll>&dist,vector<ll>&num)
{
  queue<ll>q;
  q.push(source);
  dist[source]=0;
  num[source]=1;
  while(!q.empty()){
    ll u=q.front();q.pop();
    for(auto v:g[u]){
      if(dist[u]+1<dist[v]){
        dist[v]=dist[u]+1;
        num[v]=num[u]%mod;
        q.push(v);
      }
      else if(dist[u]+1==dist[v]){
        num[v]=((num[v]%mod)+(num[u]%mod))%mod;
      }
    }
  }
  return;
}
void solve()
{
    ll n,m,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<vector<ll>>g(n+5);
    for(int i=0;i<m;i++){
      cin>>x>>y;
      g[x].pb(y);
      g[y].pb(x);
    }
    vector<ll>dist(n+5,INF);
    vector<ll>num(n+5);
    ll source=1;//cin>>source;
    bfs(source,g,dist,num);
    cout<<num[n]<<endl;
}

int main()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //ll t;cin>>t;while(t--) 
   solve();           
}
/*
1
9 11
0 1
0 3
1 3
1 2
3 4
2 6
4 5
5 6
6 7
6 8
7 8
*/