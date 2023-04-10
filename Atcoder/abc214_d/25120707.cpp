
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

struct DSU
{
	int n;
	vector<ll>p,sz;
	DSU(int _n)
	{
		n = _n;
		p.assign(n + 1,-1);
		for (int i = 0;i<=n;i++)p[i] = i;
		sz.assign(n + 1,1); // initially assign 0
	}
	int Find(int u)
	{ 
		if (p[u] == u)return u;
		return p[u] = Find(p[u]);
	}
	void Merge(int a,int b)
	{
		a = Find(a),b = Find(b);
		if (a != b){
		p[b] = a;
		sz[a] += sz[b];
		}
	}
};	
void solve()
{
    int n;
    cin>>n;
    DSU val(n + 1);
   vector<vector<ll>> edges(n,vector<ll>(3));
    for (int i = 1;i<=n - 1;i++)
    	cin>>edges[i][2]>>edges[i][1]>>edges[i][0];
    sort(edges.begin() + 1,edges.end());
    ll ans = 0;
    for (int i = 1;i<=n - 1;i++){
    	ll w = edges[i][0];
    	int u = edges[i][1],v = edges[i][2];
    	ans += val.sz[val.Find(u)] * val.sz[val.Find(v)] * w;
    	/*val.Find(u)--> it gives U parent node /representative 
    	val.sz[val.Find(u)]-->it gives the size of parent node U (Before merging u and v),thats why we dont need to sort*/
    	val.Merge(u,v);
    }
    cout<<ans;
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