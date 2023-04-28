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
/*https://cses.fi/problemset/task/1633*/
/*ll dp[1000006],n;
ll f(ll sum){
	if(sum==n){return 1;}
	if(dp[sum]!=-1) return dp[sum]%mod;
	ll ans=0;
    for(int i=1;i<=6;i++)
    {
    	if(sum+i<=n){
    		ans+=f(sum+i)%mod;
    	}
    }
    return dp[sum]=ans%mod;
}
void solve()
{   
	mem(dp,-1);
	cin>>n;
	cout<<f(0)<<endl;
}*/
 
 
// use 1D inistite of 2D
// Another variation 
// That is we call ans=min/max(ans,f(a[i]+sum)+1);
// Minimum Number of Coin Count
ll dp[1000006],n,m;
vector<ll>a;
ll f(ll sum){
	if(sum==m){return 0;}
	if(dp[sum]!=-1) return dp[sum];
	ll ans=INF;
    for(int i=0;i<n;i++){
    	if(sum+a[i]<=m){
    		ans=min(ans,f(sum+a[i])+1);
    	}
    }
    return dp[sum]=ans;
}
void solve()
{   
	mem(dp,-1);
	cin>>n>>m;
	a=vector<ll>(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	f(0);
	if(dp[0]>=INF){cout<<-1<<endl;}
	else{cout<<dp[0]<<endl;}
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