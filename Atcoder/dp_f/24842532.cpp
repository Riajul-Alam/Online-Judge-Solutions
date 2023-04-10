
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
 //Problem-F LCS
// Print path
string a,b;
ll n,m;
ll dp[3005][3005];
ll dr[3005][3005];
ll f(ll i,ll j)
{
    if(i==n || j==m)
    {
    	return 0;
    }
    ll &ret=dp[i][j];
    if(ret!=-1)return ret;
    if(a[i]==b[j])
    {
    	ret=1+f(i+1,j+1);// 1
    	dr[i][j]=1;
    }
    else{
    	ll a=f(i+1,j); // 2
    	ll b=f(i,j+1); // 3
    	if(a>b){
    		ret=a;
    		dr[i][j]=2;
    	}else{
    		ret=b;
    		dr[i][j]=3;
    	}
    }
    return ret;
}
void print(ll i,ll j)
{
    if(i==n || j==m){
    	return;
    } 
    if(dr[i][j]==1)
    {
    	cout<<a[i];
    	print(i+1,j+1);// 1
    }
    else if(dr[i][j]==2){
    	print(i+1,j); // 2
    }
    else if(dr[i][j]==3){
        print(i,j+1); // 3
    }
}
void solve()
{
  mem(dp,-1);
  cin>>a>>b;
  n=a.size(),m=b.size();
  f(0,0);
  print(0,0);
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



