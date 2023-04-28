//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpl vector<pll>
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define toll(a) atoll(a.c_str())
string tostr(ll a) {stringstream rr;rr<<a;return rr.str();}
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
#define vvb vector<vector<bool>>
#define vb	vector<bool>
 
// Grid direction array [4]
ll X[4]={0,0,-1,1};
ll Y[4]={1,-1,0,0};
// Grid direction array [8]
ll X8[8]={0,0,1,-1,-1,1,1,-1};
ll Y8[8]={1,-1,0,0,-1,-1,1,1};
// Bishop direction array [8]
ll BX[8]={0,0,1,-1,-1,1,1,-1};
ll BY[8]={1,-1,0,0,-1,-1,1,1};
// Knight Direction Array
ll KX[8] = {1,1,2,2,-1,-1,-2,-2};
ll KY[8] = {2,-2,1,-1,2,-2,1,-1};
 
bool valid(ll x,ll y,ll nx,ll my,vvb &visited){
	return (x>=0 && x<nx && y>=0 && y<my && !visited[x][y]);
}
 
ll dfs(ll x,ll y,vvb &visited,vector<string>&a,ll n,ll m){
	if(visited[x][y]){
		return 0;
	}
	ll ans=1;
	visited[x][y]=1;
	for(int i=0;i<4;i++)
	{
		ll nx=X[i]+x;
		ll my=Y[i]+y;
		if(valid(nx,my,n,m,visited)){
			ans+=dfs(nx,my,visited,a,n,m);
		}
	}
	return ans;
}
void solve()
{
    ll n,m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vvb visited(n+5,vb(m+5,0));
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++){
    		if(a[i][j]=='#'){
    			visited[i][j]=1;
    		}
    	}
    }
    for(ll i=0;i<n;i++){
    	for(ll j=0;j<m;j++){
    		if(!visited[i][j]){
    			dfs(i,j,visited,a,n,m);
    			ans++;
    		}
    	}
    }
    cout<<ans<<endl;
}
 
/*
1
5 4
1111
0000
1111
0001
1110
=12
*/
 
 
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