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
vector<ll>graph[2 * 100005];
bool visited[2 * 100005];
void dfs(ll i)
{
	if (visited[i]) return;
	visited[i] = true;
	cout<<i<<" ";
	sort(graph[i].begin(), graph[i].end());
	for (ll q = 0; q < graph[i].size(); q++)
	{
		ll x = graph[i][q];
		if (!visited[x])
		{
			dfs(x);
			cout<<i<<" ";
		}
	}
}
void solve()
{
	int t = 1;
	//cin>>t;
	while (t--)
	{
		ll n, m, x, y, z, k, sum = 0, c1 = 0, c2 = 0, ans = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			graph[x].pb(y);
			graph[y].pb(x);
		}
		dfs(1);
		cout << endl;
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