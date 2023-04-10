//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld; 
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(cont) (int)(cont).size()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const ll mod = 1e9 + 7;
#define eps 1e-10
#define INF 1e18
#define N 1005
#define W 100005
vector<pll>item;
ll n,w;
vvl dp(N,vl(W));

ll f(ll i,ll sum){
  if(i>=n || sum>w)return 0;
  if(dp[i][sum]!=-1)return dp[i][sum];
  ll x=0,y=0;
  if(sum+item[i].ff<=w){
    x=item[i].ss+f(i+1,sum+item[i].ff);
  }
  y=f(i+1,sum);
  dp[i][sum]=max(x,y);
  return dp[i][sum];
}

void solve()
{
    ll m,i,j,k,x,y,z,sum=0,c1=0,c2=0,ans=0;
    cin>>n>>w;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      item.pb({x,y});
    }
    for(int i=0;i<=n;i++){
      for(int j=0;j<=W;j++){
        dp[i][j]=-1;
      }
    }
    cout<<f(0,0)<<endl;

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
