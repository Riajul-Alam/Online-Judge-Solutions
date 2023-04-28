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
const ll mod=1e9+7;
 
#define N 1000006
vector<ll>dp(N);
 
ll f(ll sum){
	if(sum==0){
		return 1;
	}
	else if(sum<0){
		return 0;
	}
	if(dp[sum]!=-1)return dp[sum]%mod;
 
	ll ans=0;
	for(int i=1;i<=6;i++){
		ans+=f(sum-i)%mod;
	}
	dp[sum]=ans%mod;
	return dp[sum];
}
void solve()
{
    ll n,m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n;
    for(int i=0;i<=n;i++)dp[i]=-1;
    cout<<f(n)<<endl;
}
 
int main()
{  
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //fast;
   //ll t;cin>>t;while(t--) 
   solve();         	
}