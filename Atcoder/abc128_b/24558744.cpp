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
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug cout<<"OK"<<endl;
ll n,k;
vector<ll>v;
ll dp[100005];
ll f(ll pos){
	if(pos==n-1){
	  return 0;
	}
	if(dp[pos]!=-1){
		return dp[pos];
	}
	ll a=INT_MAX,b=INT_MAX;
	for(int i=1;i<=k;i++){
		if(pos+i>=n){break;}
    b=min(b,abs(v[pos]-v[pos+i])+f(pos+i));
	}
	dp[pos]=b;	
	return dp[pos];
}
int main()
{
	memset(dp,-1,sizeof(dp));
    cin>>n>>k;
    for(int i=0;i<n;i++){
    	ll x;cin>>x;
    	v.push_back(x);
    }
    cout<<f(0)<<endl;
}