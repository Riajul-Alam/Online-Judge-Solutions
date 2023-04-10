
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
   ll n,x,y;
   cin>>n>>x>>y;
   vector<vector<ll>>graph(2005);
   vector<ll>ans(2005,0);
   for(ll i=1;i<n;i++)
   {
   	 graph[i].pb(i+1);
   	 graph[i+1].pb(i);
   }
   graph[x].pb(y);
   graph[y].pb(x);
   
   // Now we can call bfs for all every single node
   for(ll i=1;i<=n;i++)
   {
   	queue<ll>q;
   	vector<ll>dist(2005,-1);
   	dist[i]=0;// initialize source node distance 0
    q.push(i);

    while(!q.empty())
    {
    	ll u=q.front();
    	q.pop();
    	for(auto v:graph[u])
    	{
    		if(dist[v]==-1)
    		{
    			dist[v]=dist[u]+1;
    			if(i<v) // check this because if current node greater than i ,that means traverse this distance (add this distance) before
    			{
                   ans[dist[v]]++;
    			}
    			q.push(v);
    		}
    	}
    }
   }
   for(ll i=1;i<n;i++)
    {
    	cout<<ans[i]<<endl;
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